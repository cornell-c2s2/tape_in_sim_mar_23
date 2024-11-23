#!/bin/bash
# Function to display help message
show_help() {
    echo "Usage: $0 [options]"
    echo "Options:"
    echo "  -h, -help       Show this help message"
    echo "  -waves          Include wave data in simulation"
    echo "  -coverage       Include coverage data in you simulation"
    echo "  -t, -test       Insert specific tests in your python file you want to run by name (As listed in the test registry)"
}

WAVES=0
COVER=0
SELECTED_TESTS=()

#Clean the environment
make clean

# Parse command-line arguments
while [[ "$#" -gt 0 ]]; do
    case $1 in
        -h|-help)
            show_help
            exit 0
            ;;
        -waves)
            WAVES=1
            echo "Waves enabled"
            ;;
        -coverage)
            COVER=1
            echo "Coverage enabled"
            ;;
        -t|-tests)
            shift
            while [[ $# -gt 0 && $1 != -* ]]; do
                SELECTED_TESTS+=("$1")
                shift
            done
            ;;
        *)
            echo "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
    shift
done

# Python script to extract test names from the cocotb registry
export TAPEIN_PATH="$HOME/tape_in_sim_mar_23/sim"
export PYTHONPATH=$PWD:$PYTHONPATH
export PYTHONPATH=$TAPEIN_PATH:$PYTHONPATH
MODULE="tape_in_FFT_interconnectRTL_test"

PYTHON_SCRIPT="
import inspect
import importlib
import cocotb

# Import the test module
module = importlib.import_module('$MODULE')

# Discover all cocotb tests
test_names = [
    name for name, obj in inspect.getmembers(module)
    if isinstance(obj, cocotb.regression.Test)
]

print(' '.join(test_names))
"


# Extract test names using Python
TESTS=$(python3 -c "$PYTHON_SCRIPT")

# Check if any tests were found
if [ -z "$TESTS" ]; then
    echo "No tests found in the cocotb registry."
    exit 1
fi

#Filter for selected tests if specified
if [[ ${#SELECTED_TESTS[@]} -gt 0 ]]; then
    echo "Selected tests: ${SELECTED_TESTS[@]}"

    # Validate selected tests
    for TEST in "${SELECTED_TESTS[@]}"; do
        if [[ ! " $TESTS " =~ " $TEST " ]]; then
            echo "Error: Invalid test specified: $TEST"
            exit 1
        fi
    done

    # Use only the selected tests
    TESTS="${SELECTED_TESTS[@]}"
fi

echo "Found tests: $TESTS"

START_TIME=$(date +%s)

#Make the logs directory
mkdir -p obj_dir logs waves

#Terminate all simulations after Ctrl+C
trap "echo 'Terminating...'; kill 0" SIGINT SIGTERM

# Run each test in parallel
for TEST in $TESTS; do
    (
        # Check if the test matches the naming convention {test name}_###
        if [[ "$TEST" =~ ^([a-zA-Z0-9_]+)_([0-9]{3})$ ]]; then
            TEST_NAME=${BASH_REMATCH[1]} # Extract the part before _###
            TEST_SUFFIX=${BASH_REMATCH[2]} # Extract the ### part
        else
            TEST_NAME="individual" # For individual tests without _###
            TEST_SUFFIX=$TEST
        fi
        
        # Create a unique directory for the test
        TEST_DIR="obj_dir/$TEST_NAME/$TEST_SUFFIX"
        LOG_DIR="logs/$TEST_NAME/$TEST_SUFFIX"
        WAVEFORM_DIR="waves/$TEST_NAME/$TEST_SUFFIX"
        mkdir -p "$TEST_DIR" "$LOG_DIR" "$WAVEFORM_DIR"

        # Change to the test's unique directory
        cd "$TEST_DIR" || exit 1

        # Run the test with a unique working directory
        echo "Running test: $TEST"
        WAVES=$WAVES COVER=$COVER WAVEFORM_DIR=$WAVEFORM_DIR TESTCASE=$TEST TESTNAME=$TEST_NAME TESTSUFFIX=$TEST_SUFFIX make -C ../../../ > ../../../$LOG_DIR/$TEST.log 2>&1
        if [ $? -eq 0 ]; then
            echo "Test $TEST PASSED"
        else
            echo "Test $TEST FAILED"
        fi

        # Return to the original directory
        cd - >/dev/null
    ) &
done

# Wait for all background processes to complete
wait

# Record the end time
END_TIME=$(date +%s)

# Calculate the elapsed time
ELAPSED_TIME=$((END_TIME - START_TIME))

# Convert elapsed time to a human-readable format
HOURS=$((ELAPSED_TIME / 3600))
MINUTES=$(((ELAPSED_TIME % 3600) / 60))
SECONDS=$((ELAPSED_TIME % 60))

echo "All tests completed."
printf "Total runtime: %02d:%02d:%02d (HH:MM:SS)\n" $HOURS $MINUTES $SECONDS