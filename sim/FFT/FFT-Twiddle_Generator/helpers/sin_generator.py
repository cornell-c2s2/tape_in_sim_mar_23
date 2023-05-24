"""
Made by Will Salcedo '23
Automatically generates a discrete sinewave in fxp format.

Input parameters:
BIT_WIDTH - bitwidth of sine wave fixed point
DECIMAL_POINT - which bit is the decimal bit
SIZE_FFT - # of points in the FFT
"""


from math import sin
import math
from math import trunc
import fxpmath

BIT_WIDTH = 32
DECIMAL_POINT = 16
SIZE_FFT  = 256

module_name = 'SineWave__BIT_WIDTH_' + str(BIT_WIDTH) + '__DECIMAL_POINT_' + str(DECIMAL_POINT) + '__SIZE_FFT_' + str(SIZE_FFT) + 'VRTL'

def write_module_header(f):
    f.write('//SINE WAVE OF BIT_WIDTH = ' + str(BIT_WIDTH) + ', DECIMAL_PT =  ' + str(DECIMAL_POINT) + '\n')
    f.write('//FOR FFT OF SIZE = ' + str(SIZE_FFT) + '\n')
    f.write('module ' + module_name + '\n')
    f.write('   (' + '\n')
    f.write('       output logic [' + str(BIT_WIDTH) +' - 1:0] sine_wave_out [0:' + str(SIZE_FFT) + ' - 1]' + '\n')
    f.write('   );' + '\n')



with open('../sim/FFTTwiddleGenerator/' + module_name + '.v', 'w') as f:
    write_module_header(f)

    for n in range(SIZE_FFT):
        f.write('   assign sine_wave_out[' + str(n) + '] = ' + str(trunc(sin( 2 * math.pi * n / SIZE_FFT) * (2**DECIMAL_POINT))) + ';\n')
    
    f.write('endmodule')

    





