#=========================================================================
# Decoder Test
#=========================================================================

import pytest

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_test_vector_sim

from decoder.DecoderVRTL import DecoderVRTL

def test_1to2( cmdline_opts):
  run_test_vector_sim(DecoderVRTL( 1, 2),[
    (' x     y*'), #enable    
    [  0x0,  0x1], #0x1,      
    [  0x1,  0x2], #0x1,      
  ],cmdline_opts)

def test_2to4( cmdline_opts):
  run_test_vector_sim(DecoderVRTL( 2, 4),[
    (' x      y*' ), #enable   
    [  0x00,  0x01], #0x1,     
    [  0x01,  0x02], #0x1,     
    [  0x02,  0x04], #0x1,     
    [  0x03,  0x08], #0x1,     
  ],cmdline_opts)

def test_3to8( cmdline_opts):
  run_test_vector_sim(DecoderVRTL( 3, 8 ),[
    ('x        y*'), #enable     
    [ 0x01,   0x02], #0x1,      
    [ 0x02,   0x04], #0x1,      
    [ 0x03,   0x08], #0x1,      
    [ 0x04,   0x10], #0x1,      
    [ 0x05,   0x20], #0x1,      
    [ 0x06,   0x40], #0x1,      
    [ 0x07,   0x80], #0x1,      
    [ 0x00,   0x01], #0x1,      
  ],cmdline_opts)

