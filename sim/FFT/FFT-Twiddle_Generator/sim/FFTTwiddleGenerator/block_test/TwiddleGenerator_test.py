#=========================================================================
# TwiddleGenerator_test.py
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_test_vector_sim
from FFTTwiddleGenerator.TwiddleGeneratorRTL import TwiddleGeneratorTestHarnessVRTL

#-------------------------------------------------------------------------
# test_small
#-------------------------------------------------------------------------

def test_small( cmdline_opts ):
    run_test_vector_sim( TwiddleGeneratorTestHarnessVRTL(), [
        ('send_msg*'),
        [ 0x22220000 ],
    ], cmdline_opts )

def test_small_2( cmdline_opts ):
    run_test_vector_sim( TwiddleGeneratorTestHarnessVRTL(4, 1, 8, 1), [
        ('send_msg*'),
        [ 0x0202e0e0 ],
    ], cmdline_opts )

def test_small_3( cmdline_opts ):
    run_test_vector_sim( TwiddleGeneratorTestHarnessVRTL(32, 16, 8, 2), [
        ('send_msg*'),
        [ 0xFFFF4AFC_00000000_0000B504_00010000_FFFF4AFC_FFFF0000_FFFF4AFC_00000000 ],
    ], cmdline_opts )

def test_small_4( cmdline_opts ):
    run_test_vector_sim( TwiddleGeneratorTestHarnessVRTL(32, 16, 4, 0), [
        ('send_msg*'),
        [ 0x00010000_00010000_00000000_00000000 ],
    ], cmdline_opts )

def test_small_5( cmdline_opts ):
    run_test_vector_sim( TwiddleGeneratorTestHarnessVRTL(32, 16, 4, 1), [
        ('send_msg*'),
        [ 0x00000000_00010000_ffff0000_00000000 ],
    ], cmdline_opts )