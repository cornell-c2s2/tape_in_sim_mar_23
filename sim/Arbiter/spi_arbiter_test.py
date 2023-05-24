'''
==========================================================================
ArbitratorRTL_test.py
==========================================================================
Unit test for Arbitrator.
'''

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from spi.spi_arbiter_rtl import ArbitratorRTL

num_disassems = 0

# Helper function
def t( dut, req_val, req_rdy, resp_val, resp_rdy, in_, out_addr, out_data):

  # Write input value to input port
  for i in range(num_disassems):
    dut.recv[i].msg        @= in_[i]
    dut.recv[i].val    @= req_val[i]
  dut.send.rdy        @= resp_rdy
  dut.sim_eval_combinational()

  for i in range(num_disassems):
    assert dut.recv[i].rdy == req_rdy[i]
  
  if out_addr != '?':
    assert dut.send.msg.addr == out_addr

  if out_data != '?':
    assert dut.send.msg.data == out_data

  if resp_val != '?':
    assert dut.send.val == resp_val

  # Tick simulator one cycle
  dut.sim_tick()

# # Test vectors
def test_2disassems(cmdline_opts):
  '''
  This test is for Arbitrator(4,2) (4 bits input and 2 PacketDisassemblers)
  '''
  global num_disassems 
  num_disassems = 2
  dut = ArbitratorRTL(4, num_disassems)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  for i in range(num_disassems):
      dut.recv[i].msg       @= 0 
  for i in range(num_disassems):
      dut.recv[i].val   @= 0
  dut.send.rdy   @= 0
  dut.sim_reset()
  #          req_val    req_rdy resp_val  resp_rdy    in_     out_addr   out_data
  t( dut,    [1,1],     [1,0],      1,        1,      [8,7],      0,       8 ) 
  t( dut,    [1,0],     [1,0],      1,        1,      [2,1],      0,       2 )
  t( dut,    [0,1],     [0,1],      1,        1,      [0,3],      1,       3 ) 
  t( dut,    [1,1],     [0,1],      1,        1,      [2,7],      1,       7 ) 
  t( dut,    [1,0],     [1,0],      1,        1,      [3,6],      0,       3 )
  t( dut,    [0,1],     [0,1],      1,        1,      [4,5],      1,       5 )
  t( dut,    [1,1],     [0,1],      1,        1,      [4,6],      1,       6 )
  t( dut,    [1,1],     [0,1],      1,        1,      [4,7],      1,       7 )
  t( dut,    [1,1],     [0,1],      1,        1,      [4,6],      1,       6 )
  t( dut,    [1,1],     [0,1],      1,        1,      [4,5],      1,       5 )
  t( dut,    [1,0],     [1,0],      1,        1,      [3,6],      0,       3 )
  t( dut,    [1,1],     [1,0],      1,        1,      [4,6],      0,       4 )
  t( dut,    [1,1],     [1,0],      1,        1,      [5,7],      0,       5 )
  t( dut,    [1,1],     [1,0],      1,        1,      [4,6],      0,       4 )
  t( dut,    [1,1],     [1,0],      1,        1,      [5,5],      0,       5 )
  t( dut,    [0,0],     [1,0],      0,        1,      [3,6],      '?',       '?' )
  t( dut,    [0,0],     [1,0],      0,        1,      [3,6],      '?',       '?' )
  t( dut,    [0,0],     [1,0],      0,        1,      [8,7],      '?',       '?' ) 
  t( dut,    [0,1],     [0,1],      1,        1,      [2,1],      1,       1 )
  t( dut,    [0,1],     [0,0],      0,        0,      [2,1],      '?',       '?' )
  t( dut,    [0,1],     [0,0],      0,        0,      [2,1],      '?',       '?' )
  t( dut,    [0,1],     [0,0],      0,        0,      [2,1],      '?',       '?' )
  t( dut,    [0,1],     [0,1],      1,        1,      [2,3],      1,       3 )
  t( dut,    [1,0],     [1,0],      1,        1,      [2,1],      0,       2 )
  t( dut,    [1,1],     [1,0],      1,        1,      [4,1],      0,       4 )
  t( dut,    [1,1],     [0,0],      0,        0,      [2,1],      '?',       '?' )
  t( dut,    [1,1],     [0,0],      0,        0,      [2,1],      '?',       '?' )
  t( dut,    [1,1],     [0,0],      0,        0,      [2,1],      '?',       '?' )
  t( dut,    [1,1],     [1,0],      1,        1,      [2,3],      0,       2 )
  t( dut,    [0,1],     [0,1],      1,        1,      [0,3],      1,       3 ) 
  t( dut,    [1,1],     [0,0],      0,        0,      [0,3],      '?',       '?' )
  t( dut,    [1,1],     [0,1],      1,        1,      [2,7],      1,       7 ) 
  t( dut,    [1,0],     [1,0],      1,        1,      [3,6],      0,       3 )
  t( dut,    [0,1],     [0,0],      0,        0,      [3,6],      '?',       '?' )
  t( dut,    [0,1],     [0,1],      1,        1,      [4,5],      1,       5 )
  t( dut,    [1,1],     [0,1],      1,        1,      [4,6],      1,       6 )
  t( dut,    [1,1],     [0,1],      1,        1,      [4,7],      1,       7 )
  t( dut,    [1,1],     [0,1],      1,        1,      [4,6],      1,       6 )
  t( dut,    [1,1],     [0,1],      1,        1,      [4,5],      1,       5 )
  t( dut,    [1,0],     [1,0],      1,        1,      [3,6],      0,       3 )
  t( dut,    [1,1],     [1,0],      1,        1,      [4,6],      0,       4 )
  t( dut,    [1,1],     [1,0],      1,        1,      [5,7],      0,       5 )
  t( dut,    [1,0],     [0,0],      0,        0,      [3,6],      '?',       '?' )
  t( dut,    [1,1],     [1,0],      1,        1,      [4,6],      0,       4 )
  t( dut,    [1,0],     [1,0],      1,        1,      [10,1],     0,        10 )
  t( dut,    [0,0],     [1,0],      0,        1,      [3,6],      '?',       '?' )
  t( dut,    [0,0],     [1,0],      0,        1,      [3,6],      '?',       '?' )


def test_3disassems(cmdline_opts):
  '''
  This test is for Arbitrator(4,3) (4 bits input and 3 PacketDisassemblers)
  '''
  global num_disassems 
  num_disassems = 3
  dut = ArbitratorRTL(4, num_disassems)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  for i in range(num_disassems):
      dut.recv[i].msg       @= 0 
  for i in range(num_disassems):
      dut.recv[i].val   @= 0
  dut.send.rdy   @= 0
  dut.sim_reset()
  #          req_val       req_rdy   resp_val  resp_rdy      in_    out_addr out_data
  t( dut,    [1,1,1],      [1,0,0],      1,        1,      [8,7,0],   0,     8 ) 
  t( dut,    [1,0,1],      [1,0,0],      1,        1,      [2,1,0],   0,     2 )
  t( dut,    [0,1,1],      [0,1,0],      1,        1,      [0,3,0],   1,     3 ) 
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [2,7,0],   1,     7 ) 
  t( dut,    [1,0,0],      [1,0,0],      1,        1,      [3,6,0],   0,     3 )
  t( dut,    [0,1,1],      [0,1,0],      1,        1,      [4,5,0],   1,     5 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,6,0],   1,     6 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,7,0],   1,     7 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,6,0],   1,     6 )
  t( dut,    [1,1,1],      [0,1,0],      1,        1,      [4,5,0],   1,     5 )
  t( dut,    [1,0,1],      [1,0,0],      1,        1,      [3,6,0],   0,     3 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [4,6,0],   0,     4 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [5,7,0],   0,     5 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [4,6,0],   0,     4 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [5,5,0],   0,     5 )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [3,6,0],   '?',     '?' )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [3,6,0],   '?',     '?' )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [8,7,0],   '?',     '?' ) 
  t( dut,    [0,1,1],      [0,1,0],      1,        1,      [2,1,0],   1,     1 )
  t( dut,    [0,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [0,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [0,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [2,3,0],   1,     3 )
  t( dut,    [1,0,0],      [1,0,0],      1,        1,      [2,1,0],   0,     2 )
  t( dut,    [1,1,1],      [1,0,0],      1,        1,      [4,1,0],   0,     4 )
  t( dut,    [1,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [1,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [1,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [2,3,0],   0,     2 )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [0,3,0],   1,     3 ) 
  t( dut,    [1,1,0],      [0,0,0],      0,        0,      [0,3,0],   '?',     '?' )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [2,7,0],   1,     7 ) 
  t( dut,    [1,0,0],      [1,0,0],      1,        1,      [3,6,0],   0,     3 )
  t( dut,    [0,1,1],      [0,0,0],      0,        0,      [3,6,0],   '?',     '?' )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [4,5,0],   1,     5 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,6,0],   1,     6 )
  t( dut,    [1,1,1],      [0,1,0],      1,        1,      [4,7,0],   1,     7 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,6,0],   1,     6 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,5,0],   1,     5 )
  t( dut,    [1,0,1],      [1,0,0],      1,        1,      [3,6,0],   0,     3 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [4,6,0],   0,     4 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [5,7,0],   0,     5 )
  t( dut,    [1,0,0],      [0,0,0],      0,        0,      [3,6,0],   '?',     '?' )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [4,6,0],   0,     4 )
  t( dut,    [1,0,1],      [1,0,0],      1,        1,      [10,1,0],  0,      10 )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [3,6,0],   '?',     '?' )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [3,6,0],   '?',     '?' )
  t( dut,    [1,1,1],      [1,0,0],      1,        1,      [8,7,0],   0,     8 ) 
  t( dut,    [0,0,1],      [0,0,1],      1,        1,      [2,1,6],   2,     6 )
  t( dut,    [0,0,1],      [0,0,1],      1,        1,      [0,0,3],   2,     3 ) 
  t( dut,    [1,1,1],      [0,0,1],      1,        1,      [2,7,3],   2,     3 ) 
  t( dut,    [1,0,1],      [0,0,1],      1,        1,      [3,6,5],   2,     5 )
  t( dut,    [0,1,1],      [0,0,1],      1,        1,      [4,5,1],   2,     1 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [4,6,0],   0,     4 )
  t( dut,    [1,1,1],      [1,0,0],      1,        1,      [4,7,0],   0,     4 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [4,6,0],   0,     4 )
  t( dut,    [0,1,1],      [0,1,0],      1,        1,      [4,5,0],   1,     5 )
  t( dut,    [0,0,1],      [0,0,1],      1,        1,      [3,6,9],   2,     9 )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [4,6,1],   0,     4 )
  t( dut,    [0,1,1],      [0,1,0],      1,        1,      [5,7,0],   1,     7 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,6,0],   1,     6 )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [3,5,0],   1,     5 )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [3,6,0],   '?',     '?' )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [3,6,0],   '?',     '?' )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [8,7,0],   '?',     '?' ) 
  t( dut,    [0,1,1],      [0,1,0],      1,        1,      [2,1,0],   1,     1 )
  t( dut,    [0,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [0,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [0,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [2,3,0],   1,     3 )
  t( dut,    [0,0,1],      [0,0,1],      1,        1,      [2,1,10],  2,     10 )
  t( dut,    [1,1,1],      [0,0,1],      1,        1,      [4,1,6],   2,     6 )
  t( dut,    [1,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [1,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [1,1,0],      [0,0,0],      0,        0,      [2,1,0],   '?',     '?' )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [2,3,0],   0,     2 )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [0,3,0],   1,     3 ) 
  t( dut,    [1,0,0],      [0,0,0],      0,        0,      [1,3,0],   '?',     '?' )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [2,7,0],   0,     2 ) 
  t( dut,    [1,0,0],      [1,0,0],      1,        1,      [3,6,0],   0,     3 )
  t( dut,    [0,1,1],      [0,0,0],      0,        0,      [3,6,0],   '?',     '?' )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [4,5,0],   1,     5 )
  t( dut,    [1,1,1],      [0,1,0],      1,        1,      [4,6,0],   1,     6 )
  t( dut,    [1,1,1],      [0,1,0],      1,        1,      [4,7,0],   1,     7 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,6,0],   1,     6 )
  t( dut,    [1,1,0],      [0,1,0],      1,        1,      [4,5,0],   1,     5 )
  t( dut,    [1,0,1],      [1,0,0],      1,        1,      [3,6,0],   0,     3 )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [4,6,0],   '?',     '?' )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [5,7,0],   0,     5 )
  t( dut,    [1,0,0],      [0,0,0],      0,        0,      [3,6,0],   '?',     '?' )
  t( dut,    [1,1,0],      [1,0,0],      1,        1,      [4,6,0],   0,     4 )
  t( dut,    [1,0,1],      [1,0,0],      1,        1,      [10,1,0],  0,      10 )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [3,6,0],   '?',     '?' )
  t( dut,    [0,0,0],      [1,0,0],      0,        1,      [3,6,0],   '?',     '?' )
  t( dut,    [1,0,0],      [1,0,0],      1,        1,      [1,2,3],   0,     1 )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [1,2,3],   1,     2 )
  t( dut,    [0,0,1],      [0,0,1],      1,        1,      [1,2,3],   2,     3 )
  t( dut,    [0,1,0],      [0,1,0],      1,        1,      [1,2,3],   1,     2 )
  t( dut,    [1,0,0],      [1,0,0],      1,        1,      [1,2,3],   0,     1 )


def test_4disassems(cmdline_opts):
  '''
  This test is for Arbitrator(4,4) (4 bits input and 4 PacketDisassemblers)
  '''
  global num_disassems 
  num_disassems = 4
  dut = ArbitratorRTL(4, num_disassems)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  for i in range(num_disassems):
      dut.recv[i].msg       @= 0 
  for i in range(num_disassems):
      dut.recv[i].val   @= 0
  dut.send.rdy   @= 0
  dut.sim_reset()
  #          req_val        req_rdy      resp_val  resp_rdy      in_   out_addr  out_data
  t( dut,    [1,1,1,1],     [1,0,0,0],      1,        1,      [8,7,0,0],  0,     8 ) 
  t( dut,    [1,0,1,1],     [1,0,0,0],      1,        1,      [2,1,0,0],  0,     2 )
  t( dut,    [0,1,1,0],     [0,1,0,0],      1,        1,      [0,3,0,0],  1,     3 ) 
  t( dut,    [1,1,0,1],     [0,1,0,0],      1,        1,      [2,7,0,0],  1,     7 ) 
  t( dut,    [1,0,0,1],     [1,0,0,0],      1,        1,      [3,6,0,0],  0,     3 )
  t( dut,    [0,1,1,0],     [0,1,0,0],      1,        1,      [4,5,0,0],  1,     5 )
  t( dut,    [1,1,0,1],     [0,1,0,0],      1,        1,      [4,6,0,0],  1,     6 )
  t( dut,    [1,1,0,1],     [0,1,0,0],      1,        1,      [4,7,0,0],  1,     7 )
  t( dut,    [1,1,0,1],     [0,1,0,0],      1,        1,      [4,6,0,0],  1,     6 )
  t( dut,    [1,1,1,0],     [0,1,0,0],      1,        1,      [4,5,0,0],  1,     5 )
  t( dut,    [1,0,1,0],     [1,0,0,0],      1,        1,      [3,6,0,0],  0,     3 )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [4,6,0,0],  0,     4 )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [5,7,0,0],  0,     5 )
  t( dut,    [1,1,0,1],     [1,0,0,0],      1,        1,      [4,6,0,0],  0,     4 )
  t( dut,    [1,1,0,1],     [1,0,0,0],      1,        1,      [5,5,0,0],  0,     5 )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [3,6,0,0],  '?',     '?' )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [3,6,0,0],  '?',     '?' )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [8,7,0,0],  '?',     '?' ) 
  t( dut,    [0,1,1,0],     [0,1,0,0],      1,        1,      [2,1,0,0],  1,     1 )
  t( dut,    [0,1,0,1],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [0,1,0,0],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [0,1,0,0],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [0,1,0,1],     [0,1,0,0],      1,        1,      [2,3,0,0],  1,     3 )
  t( dut,    [1,0,0,0],     [1,0,0,0],      1,        1,      [2,1,0,0],  0,     2 )
  t( dut,    [1,1,1,0],     [1,0,0,0],      1,        1,      [4,1,0,0],  0,     4 )
  t( dut,    [1,1,0,0],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [1,1,0,0],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [1,1,0,1],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [2,3,0,0],  0,     2 )
  t( dut,    [0,1,0,1],     [0,1,0,0],      1,        1,      [0,3,0,0],  1,     3 ) 
  t( dut,    [1,1,0,0],     [0,0,0,0],      0,        0,      [0,3,0,0],  '?',     '?' )
  t( dut,    [1,1,0,0],     [0,1,0,0],      1,        1,      [2,7,0,0],  1,     7 ) 
  t( dut,    [1,0,0,1],     [1,0,0,0],      1,        1,      [3,6,0,0],  0,     3 )
  t( dut,    [0,1,1,1],     [0,0,0,0],      0,        0,      [3,6,0,0],  '?',     '?' )
  t( dut,    [0,1,0,0],     [0,1,0,0],      1,        1,      [4,5,0,0],  1,     5 )
  t( dut,    [1,1,0,0],     [0,1,0,0],      1,        1,      [4,6,0,0],  1,     6 )
  t( dut,    [1,1,1,1],     [0,1,0,0],      1,        1,      [4,7,0,0],  1,     7 )
  t( dut,    [1,1,0,0],     [0,1,0,0],      1,        1,      [4,6,0,0],  1,     6 )
  t( dut,    [1,1,0,0],     [0,1,0,0],      1,        1,      [4,5,0,0],  1,     5 )
  t( dut,    [1,0,1,1],     [1,0,0,0],      1,        1,      [3,6,0,0],  0,     3 )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [4,6,0,0],  0,     4 )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [5,7,0,0],  0,     5 )
  t( dut,    [1,0,0,1],     [0,0,0,0],      0,        0,      [3,6,0,0],  '?',     '?' )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [4,6,0,0],  0,     4 )
  t( dut,    [1,0,1,0],     [1,0,0,0],      1,        1,      [10,1,0,0], 0,      10 )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [3,6,0,0],  '?',     '?' )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [3,6,0,0],  '?',     '?' )
  t( dut,    [1,1,1,1],     [1,0,0,0],      1,        1,      [8,7,0,0],  0,     8 ) 
  t( dut,    [0,0,1,1],     [0,0,1,0],      1,        1,      [2,1,6,0],  2,     6 )
  t( dut,    [0,0,1,0],     [0,0,1,0],      1,        1,      [0,0,3,0],  2,     3 ) 
  t( dut,    [1,1,1,1],     [0,0,1,0],      1,        1,      [2,7,3,0],  2,     3 ) 
  t( dut,    [1,0,1,1],     [0,0,1,0],      1,        1,      [3,6,5,0],  2,     5 )
  t( dut,    [0,1,1,0],     [0,0,1,0],      1,        1,      [4,5,1,0],  2,     1 )
  t( dut,    [1,1,0,1],     [1,0,0,0],      1,        1,      [4,6,0,0],  0,     4 )
  t( dut,    [1,1,1,1],     [1,0,0,0],      1,        1,      [4,7,0,0],  0,     4 )
  t( dut,    [1,1,0,1],     [1,0,0,0],      1,        1,      [4,6,0,0],  0,     4 )
  t( dut,    [0,1,1,0],     [0,1,0,0],      1,        1,      [4,5,0,0],  1,     5 )
  t( dut,    [0,0,0,1],     [0,0,0,1],      1,        1,      [3,6,0,9],  3,     9 )
  t( dut,    [1,1,0,1],     [0,0,0,1],      1,        1,      [4,6,0,11], 3,     11 )
  t( dut,    [0,1,1,0],     [0,1,0,0],      1,        1,      [5,7,0,0],  1,     7 )
  t( dut,    [1,1,0,1],     [0,1,0,0],      1,        1,      [4,6,0,0],  1,     6 )
  t( dut,    [0,0,0,1],     [0,0,0,1],      1,        1,      [5,5,0,4],  3,     4 )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [3,6,0,0],  '?',     '?' )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [3,6,0,0],  '?',     '?' )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [8,7,0,0],  '?',     '?' ) 
  t( dut,    [0,1,1,0],     [0,1,0,0],      1,        1,      [2,1,0,0],  1,     1 )
  t( dut,    [0,1,0,1],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [0,1,0,0],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [0,1,0,0],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [0,1,0,1],     [0,1,0,0],      1,        1,      [2,3,0,0],  1,     3 )
  t( dut,    [0,0,1,0],     [0,0,1,0],      1,        1,      [2,1,15,0], 2,     15 )
  t( dut,    [1,1,1,0],     [0,0,1,0],      1,        1,      [4,1,6,0],  2,     6 )
  t( dut,    [1,1,0,0],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [1,1,0,0],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [1,1,0,1],     [0,0,0,0],      0,        0,      [2,1,0,0],  '?',     '?' )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [2,3,0,0],  0,     2 )
  t( dut,    [0,1,0,1],     [0,1,0,0],      1,        1,      [0,3,0,0],  1,     3 ) 
  t( dut,    [1,0,0,0],     [0,0,0,0],      0,        0,      [1,3,0,0],  '?',     '?' )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [2,7,0,0],  0,     2 ) 
  t( dut,    [1,0,0,1],     [1,0,0,0],      1,        1,      [3,6,0,0],  0,     3 )
  t( dut,    [0,1,1,1],     [0,0,0,0],      0,        0,      [3,6,0,0],  '?',     '?' )
  t( dut,    [0,1,0,0],     [0,1,0,0],      1,        1,      [4,5,0,0],  1,     5 )
  t( dut,    [1,1,1,1],     [0,1,0,0],      1,        1,      [4,6,0,0],  1,     6 )
  t( dut,    [1,1,1,1],     [0,1,0,0],      1,        1,      [4,7,0,0],  1,     7 )
  t( dut,    [1,1,0,0],     [0,1,0,0],      1,        1,      [4,6,0,0],  1,     6 )
  t( dut,    [1,1,0,0],     [0,1,0,0],      1,        1,      [4,5,0,0],  1,     5 )
  t( dut,    [1,0,1,1],     [1,0,0,0],      1,        1,      [3,6,0,0],  0,     3 )
  t( dut,    [0,0,0,1],     [0,0,0,1],      1,        1,      [4,6,0,2],  3,     2 )
  t( dut,    [1,1,0,1],     [0,0,0,1],      1,        1,      [5,7,0,1],  3,     1 )
  t( dut,    [1,0,0,1],     [0,0,0,0],      0,        0,      [3,6,0,0],  '?',     '?' )
  t( dut,    [1,1,0,0],     [1,0,0,0],      1,        1,      [4,6,0,0],  0,     4 )
  t( dut,    [1,0,1,0],     [1,0,0,0],      1,        1,      [10,1,0,0], 0,      10 )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [3,6,0,0],  '?',     '?' )
  t( dut,    [0,0,0,0],     [1,0,0,0],      0,        1,      [3,6,0,0],  '?',     '?' )

  t( dut,    [1,0,0,0],     [1,0,0,0],      1,        1,      [1,2,3,4],  0,     1 )
  t( dut,    [0,1,0,0],     [0,1,0,0],      1,        1,      [1,2,3,4],  1,     2 )
  t( dut,    [0,0,1,0],     [0,0,1,0],      1,        1,      [1,2,3,4],  2,     3 )
  t( dut,    [0,0,0,1],     [0,0,0,1],      1,        1,      [1,2,3,4],  3,     4 )
  t( dut,    [0,0,1,0],     [0,0,1,0],      1,        1,      [1,2,3,4],  2,     3 )
  t( dut,    [0,1,0,0],     [0,1,0,0],      1,        1,      [1,2,3,4],  1,     2 )
  t( dut,    [1,0,0,0],     [1,0,0,0],      1,        1,      [1,2,3,4],  0,     1 )
