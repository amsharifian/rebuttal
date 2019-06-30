// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VComputeNode_H_
#define _VComputeNode_H_

#include "verilated_heavy.h"

class VComputeNode__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VComputeNode) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_enable_ready,0,0);
    VL_IN8(io_enable_valid,0,0);
    VL_IN8(io_enable_bits_control,0,0);
    VL_IN8(io_Out_0_ready,0,0);
    VL_OUT8(io_Out_0_valid,0,0);
    VL_OUT8(io_Out_0_bits_predicate,0,0);
    VL_OUT8(io_LeftIO_ready,0,0);
    VL_IN8(io_LeftIO_valid,0,0);
    VL_IN8(io_LeftIO_bits_predicate,0,0);
    VL_OUT8(io_RightIO_ready,0,0);
    VL_IN8(io_RightIO_valid,0,0);
    VL_IN8(io_RightIO_bits_predicate,0,0);
    VL_IN16(io_enable_bits_taskID,9,0);
    VL_OUT16(io_Out_0_bits_taskID,9,0);
    VL_IN16(io_LeftIO_bits_taskID,9,0);
    VL_IN16(io_RightIO_bits_taskID,9,0);
    VL_OUT(io_Out_0_bits_data,31,0);
    VL_IN(io_LeftIO_bits_data,31,0);
    VL_IN(io_RightIO_bits_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(ComputeNode__DOT__enable_R_control,0,0);
    VL_SIG8(ComputeNode__DOT__enable_valid_R,0,0);
    VL_SIG8(ComputeNode__DOT__out_ready_R_0,0,0);
    VL_SIG8(ComputeNode__DOT__out_valid_R_0,0,0);
    VL_SIG8(ComputeNode__DOT___T_76,0,0);
    VL_SIG8(ComputeNode__DOT___T_79,0,0);
    VL_SIG8(ComputeNode__DOT__left_valid_R,0,0);
    VL_SIG8(ComputeNode__DOT__right_valid_R,0,0);
    VL_SIG8(ComputeNode__DOT__out_data_R_predicate,0,0);
    VL_SIG8(ComputeNode__DOT__state,0,0);
    VL_SIG8(ComputeNode__DOT___T_114,0,0);
    VL_SIG8(ComputeNode__DOT___T_117,0,0);
    VL_SIG8(ComputeNode__DOT___T_121,0,0);
    VL_SIG8(ComputeNode__DOT___T_123,0,0);
    VL_SIG8(ComputeNode__DOT___T_132,0,0);
    VL_SIG16(ComputeNode__DOT__enable_R_taskID,9,0);
    VL_SIG16(ComputeNode__DOT__value,14,0);
    VL_SIG16(ComputeNode__DOT___T_87,14,0);
    VL_SIG16(ComputeNode__DOT__left_R_taskID,9,0);
    VL_SIG16(ComputeNode__DOT__right_R_taskID,9,0);
    VL_SIG(ComputeNode__DOT__FU_io_out,31,0);
    VL_SIG(ComputeNode__DOT__left_R_data,31,0);
    VL_SIG(ComputeNode__DOT__right_R_data,31,0);
    VL_SIG(ComputeNode__DOT__out_data_R_data,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VComputeNode__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VComputeNode);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VComputeNode(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VComputeNode();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VComputeNode__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VComputeNode__Syms* symsp, bool first);
  private:
    static QData _change_request(VComputeNode__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VComputeNode__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VComputeNode__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VComputeNode__Syms* __restrict vlSymsp);
    static void _eval_settle(VComputeNode__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VComputeNode__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VComputeNode__Syms* __restrict vlSymsp);
    static void traceChgThis(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
