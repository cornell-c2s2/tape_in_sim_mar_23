
#=========================================================================
# VFFTSPIInterconnectRTL_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff

#-------------------------------------------------------------------------
# FFTSPIInterconnectRTL
#-------------------------------------------------------------------------

class FFTSPIInterconnectRTL( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * adapter_parity;        
        unsigned char * clk;        
        unsigned char * minion_parity;        
        unsigned char * reset;        
        unsigned char * minion_cs;        
        unsigned char * minion_cs_2;        
        unsigned char * minion_cs_3;        
        unsigned char * minion_miso;        
        unsigned char * minion_miso_2;        
        unsigned char * minion_miso_3;        
        unsigned char * minion_mosi;        
        unsigned char * minion_mosi_2;        
        unsigned char * minion_mosi_3;        
        unsigned char * master_cs;        
        unsigned char * master_miso;        
        unsigned char * master_mosi;        
        unsigned char * master_sclk;        
        unsigned char * minion_sclk;        
        unsigned char * minion_sclk_2;        
        unsigned char * minion_sclk_3;

        // Verilator model
        void * model;

      } VFFTSPIInterconnectRTL_t;

      VFFTSPIInterconnectRTL_t * create_model( const char * );
      void destroy_model( VFFTSPIInterconnectRTL_t *);
      void comb_eval( VFFTSPIInterconnectRTL_t * );
      void seq_eval( VFFTSPIInterconnectRTL_t * );
      void assert_en( bool en );
      

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libFFTSPIInterconnectRTL_v.so', os.path.getmtime( './libFFTSPIInterconnectRTL_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libFFTSPIInterconnectRTL_v.so')

    # increment instance count
    FFTSPIInterconnectRTL.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 0:
      if False:
        verilator_vcd_file = ".verilator1.vcd"
      else:
        verilator_vcd_file = "FFTSPIInterconnectRTL.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.seq_eval

    # declare the port interface
    s.adapter_parity = OutPort( Bits1 )
    s.minion_parity = OutPort( Bits1 )
    s.spi_min = SPIMinionWrapperIfc()

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_spi_min_DOT_cs = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_cs():
      s.s_DOT_spi_min_DOT_cs @= s.spi_min.cs
    
    s.s_DOT_spi_min_DOT_cs_2 = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_cs_2():
      s.s_DOT_spi_min_DOT_cs_2 @= s.spi_min.cs_2
    
    s.s_DOT_spi_min_DOT_cs_3 = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_cs_3():
      s.s_DOT_spi_min_DOT_cs_3 @= s.spi_min.cs_3
    
    s.s_DOT_spi_min_DOT_mosi = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_mosi():
      s.s_DOT_spi_min_DOT_mosi @= s.spi_min.mosi
    
    s.s_DOT_spi_min_DOT_mosi_2 = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_mosi_2():
      s.s_DOT_spi_min_DOT_mosi_2 @= s.spi_min.mosi_2
    
    s.s_DOT_spi_min_DOT_mosi_3 = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_mosi_3():
      s.s_DOT_spi_min_DOT_mosi_3 @= s.spi_min.mosi_3
    
    s.s_DOT_spi_min_DOT_ms_miso = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_ms_miso():
      s.s_DOT_spi_min_DOT_ms_miso @= s.spi_min.ms_miso
    
    s.s_DOT_spi_min_DOT_sclk = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_sclk():
      s.s_DOT_spi_min_DOT_sclk @= s.spi_min.sclk
    
    s.s_DOT_spi_min_DOT_sclk_2 = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_sclk_2():
      s.s_DOT_spi_min_DOT_sclk_2 @= s.spi_min.sclk_2
    
    s.s_DOT_spi_min_DOT_sclk_3 = Wire( Bits1 )
    @update
    def isignal_s_DOT_spi_min_DOT_sclk_3():
      s.s_DOT_spi_min_DOT_sclk_3 @= s.spi_min.sclk_3
    
    s.s_DOT_adapter_parity = Wire( Bits1 )
    @update
    def osignal_s_DOT_adapter_parity():
      s.adapter_parity @= s.s_DOT_adapter_parity
    
    s.s_DOT_minion_parity = Wire( Bits1 )
    @update
    def osignal_s_DOT_minion_parity():
      s.minion_parity @= s.s_DOT_minion_parity
    
    s.s_DOT_spi_min_DOT_miso = Wire( Bits1 )
    @update
    def osignal_s_DOT_spi_min_DOT_miso():
      s.spi_min.miso @= s.s_DOT_spi_min_DOT_miso
    
    s.s_DOT_spi_min_DOT_miso_2 = Wire( Bits1 )
    @update
    def osignal_s_DOT_spi_min_DOT_miso_2():
      s.spi_min.miso_2 @= s.s_DOT_spi_min_DOT_miso_2
    
    s.s_DOT_spi_min_DOT_miso_3 = Wire( Bits1 )
    @update
    def osignal_s_DOT_spi_min_DOT_miso_3():
      s.spi_min.miso_3 @= s.s_DOT_spi_min_DOT_miso_3
    
    s.s_DOT_spi_min_DOT_ms_cs = Wire( Bits1 )
    @update
    def osignal_s_DOT_spi_min_DOT_ms_cs():
      s.spi_min.ms_cs @= s.s_DOT_spi_min_DOT_ms_cs
    
    s.s_DOT_spi_min_DOT_ms_mosi = Wire( Bits1 )
    @update
    def osignal_s_DOT_spi_min_DOT_ms_mosi():
      s.spi_min.ms_mosi @= s.s_DOT_spi_min_DOT_ms_mosi
    
    s.s_DOT_spi_min_DOT_ms_sclk = Wire( Bits1 )
    @update
    def osignal_s_DOT_spi_min_DOT_ms_sclk():
      s.spi_min.ms_sclk @= s.s_DOT_spi_min_DOT_ms_sclk

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.minion_cs[0] = int(s.s_DOT_spi_min_DOT_cs)
      
      _ffi_m.minion_cs_2[0] = int(s.s_DOT_spi_min_DOT_cs_2)
      
      _ffi_m.minion_cs_3[0] = int(s.s_DOT_spi_min_DOT_cs_3)
      
      _ffi_m.minion_mosi[0] = int(s.s_DOT_spi_min_DOT_mosi)
      
      _ffi_m.minion_mosi_2[0] = int(s.s_DOT_spi_min_DOT_mosi_2)
      
      _ffi_m.minion_mosi_3[0] = int(s.s_DOT_spi_min_DOT_mosi_3)
      
      _ffi_m.master_miso[0] = int(s.s_DOT_spi_min_DOT_ms_miso)
      
      _ffi_m.minion_sclk[0] = int(s.s_DOT_spi_min_DOT_sclk)
      
      _ffi_m.minion_sclk_2[0] = int(s.s_DOT_spi_min_DOT_sclk_2)
      
      _ffi_m.minion_sclk_3[0] = int(s.s_DOT_spi_min_DOT_sclk_3)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      s.s_DOT_adapter_parity @= _ffi_m.adapter_parity[0]
      
      s.s_DOT_minion_parity @= _ffi_m.minion_parity[0]
      
      s.s_DOT_spi_min_DOT_miso @= _ffi_m.minion_miso[0]
      
      s.s_DOT_spi_min_DOT_miso_2 @= _ffi_m.minion_miso_2[0]
      
      s.s_DOT_spi_min_DOT_miso_3 @= _ffi_m.minion_miso_3[0]
      
      s.s_DOT_spi_min_DOT_ms_cs @= _ffi_m.master_cs[0]
      
      s.s_DOT_spi_min_DOT_ms_mosi @= _ffi_m.master_mosi[0]
      
      s.s_DOT_spi_min_DOT_ms_sclk @= _ffi_m.master_sclk[0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 0:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' adapter_parity={s.adapter_parity}, clk={s.clk}, minion_parity={s.minion_parity}, reset={s.reset}, spi_min.cs={s.spi_min.cs}, spi_min.cs_2={s.spi_min.cs_2}, spi_min.cs_3={s.spi_min.cs_3}, spi_min.miso={s.spi_min.miso}, spi_min.miso_2={s.spi_min.miso_2}, spi_min.miso_3={s.spi_min.miso_3}, spi_min.mosi={s.spi_min.mosi}, spi_min.mosi_2={s.spi_min.mosi_2}, spi_min.mosi_3={s.spi_min.mosi_3}, spi_min.ms_cs={s.spi_min.ms_cs}, spi_min.ms_miso={s.spi_min.ms_miso}, spi_min.ms_mosi={s.spi_min.ms_mosi}, spi_min.ms_sclk={s.spi_min.ms_sclk}, spi_min.sclk={s.spi_min.sclk}, spi_min.sclk_2={s.spi_min.sclk_2}, spi_min.sclk_3={s.spi_min.sclk_3},'

  def internal_line_trace( s ):
    return ''
