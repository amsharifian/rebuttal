// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComputeNode__Syms.h"


//======================

void VComputeNode::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VComputeNode::traceInit, &VComputeNode::traceFull, &VComputeNode::traceChg, this);
}
void VComputeNode::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VComputeNode* t=(VComputeNode*)userthis;
    VComputeNode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VComputeNode::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VComputeNode* t=(VComputeNode*)userthis;
    VComputeNode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VComputeNode::traceInitThis(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VComputeNode::traceFullThis(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VComputeNode::traceInitThis__1(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+18,"clock",-1);
	vcdp->declBit(c+19,"reset",-1);
	vcdp->declBit(c+20,"io_enable_ready",-1);
	vcdp->declBit(c+21,"io_enable_valid",-1);
	vcdp->declBus(c+22,"io_enable_bits_taskID",-1,9,0);
	vcdp->declBit(c+23,"io_enable_bits_control",-1);
	vcdp->declBit(c+24,"io_Out_0_ready",-1);
	vcdp->declBit(c+25,"io_Out_0_valid",-1);
	vcdp->declBit(c+26,"io_Out_0_bits_predicate",-1);
	vcdp->declBus(c+27,"io_Out_0_bits_taskID",-1,9,0);
	vcdp->declBus(c+28,"io_Out_0_bits_data",-1,15,0);
	vcdp->declBit(c+29,"io_LeftIO_ready",-1);
	vcdp->declBit(c+30,"io_LeftIO_valid",-1);
	vcdp->declBit(c+31,"io_LeftIO_bits_predicate",-1);
	vcdp->declBus(c+32,"io_LeftIO_bits_taskID",-1,9,0);
	vcdp->declBus(c+33,"io_LeftIO_bits_data",-1,15,0);
	vcdp->declBit(c+34,"io_RightIO_ready",-1);
	vcdp->declBit(c+35,"io_RightIO_valid",-1);
	vcdp->declBit(c+36,"io_RightIO_bits_predicate",-1);
	vcdp->declBus(c+37,"io_RightIO_bits_taskID",-1,9,0);
	vcdp->declBus(c+38,"io_RightIO_bits_data",-1,15,0);
	vcdp->declBit(c+18,"ComputeNode clock",-1);
	vcdp->declBit(c+19,"ComputeNode reset",-1);
	vcdp->declBit(c+20,"ComputeNode io_enable_ready",-1);
	vcdp->declBit(c+21,"ComputeNode io_enable_valid",-1);
	vcdp->declBus(c+22,"ComputeNode io_enable_bits_taskID",-1,9,0);
	vcdp->declBit(c+23,"ComputeNode io_enable_bits_control",-1);
	vcdp->declBit(c+24,"ComputeNode io_Out_0_ready",-1);
	vcdp->declBit(c+25,"ComputeNode io_Out_0_valid",-1);
	vcdp->declBit(c+26,"ComputeNode io_Out_0_bits_predicate",-1);
	vcdp->declBus(c+27,"ComputeNode io_Out_0_bits_taskID",-1,9,0);
	vcdp->declBus(c+28,"ComputeNode io_Out_0_bits_data",-1,15,0);
	vcdp->declBit(c+29,"ComputeNode io_LeftIO_ready",-1);
	vcdp->declBit(c+30,"ComputeNode io_LeftIO_valid",-1);
	vcdp->declBit(c+31,"ComputeNode io_LeftIO_bits_predicate",-1);
	vcdp->declBus(c+32,"ComputeNode io_LeftIO_bits_taskID",-1,9,0);
	vcdp->declBus(c+33,"ComputeNode io_LeftIO_bits_data",-1,15,0);
	vcdp->declBit(c+34,"ComputeNode io_RightIO_ready",-1);
	vcdp->declBit(c+35,"ComputeNode io_RightIO_valid",-1);
	vcdp->declBit(c+36,"ComputeNode io_RightIO_bits_predicate",-1);
	vcdp->declBus(c+37,"ComputeNode io_RightIO_bits_taskID",-1,9,0);
	vcdp->declBus(c+38,"ComputeNode io_RightIO_bits_data",-1,15,0);
	vcdp->declBus(c+2,"ComputeNode FU_io_in1",-1,15,0);
	vcdp->declBus(c+3,"ComputeNode FU_io_in2",-1,15,0);
	vcdp->declBus(c+1,"ComputeNode FU_io_out",-1,15,0);
	vcdp->declBus(c+4,"ComputeNode enable_R_taskID",-1,9,0);
	// Tracing: ComputeNode _RAND_0 // Ignored: Inlined leading underscore at ComputeNode.v:37
	vcdp->declBit(c+5,"ComputeNode enable_R_control",-1);
	// Tracing: ComputeNode _RAND_1 // Ignored: Inlined leading underscore at ComputeNode.v:39
	vcdp->declBit(c+6,"ComputeNode enable_valid_R",-1);
	// Tracing: ComputeNode _RAND_2 // Ignored: Inlined leading underscore at ComputeNode.v:41
	vcdp->declBit(c+7,"ComputeNode out_ready_R_0",-1);
	// Tracing: ComputeNode _RAND_3 // Ignored: Inlined leading underscore at ComputeNode.v:43
	vcdp->declBit(c+8,"ComputeNode out_valid_R_0",-1);
	// Tracing: ComputeNode _RAND_4 // Ignored: Inlined leading underscore at ComputeNode.v:45
	// Tracing: ComputeNode _T_76 // Ignored: Inlined leading underscore at ComputeNode.v:46
	// Tracing: ComputeNode _GEN_0 // Ignored: Inlined leading underscore at ComputeNode.v:47
	// Tracing: ComputeNode _GEN_1 // Ignored: Inlined leading underscore at ComputeNode.v:48
	// Tracing: ComputeNode _T_79 // Ignored: Inlined leading underscore at ComputeNode.v:49
	// Tracing: ComputeNode _GEN_2 // Ignored: Inlined leading underscore at ComputeNode.v:50
	// Tracing: ComputeNode _GEN_3 // Ignored: Inlined leading underscore at ComputeNode.v:51
	// Tracing: ComputeNode _GEN_4 // Ignored: Inlined leading underscore at ComputeNode.v:52
	vcdp->declBus(c+9,"ComputeNode value",-1,14,0);
	// Tracing: ComputeNode _RAND_5 // Ignored: Inlined leading underscore at ComputeNode.v:54
	// Tracing: ComputeNode _T_86 // Ignored: Inlined leading underscore at ComputeNode.v:55
	// Tracing: ComputeNode _T_87 // Ignored: Inlined leading underscore at ComputeNode.v:56
	vcdp->declBus(c+10,"ComputeNode left_R_taskID",-1,9,0);
	// Tracing: ComputeNode _RAND_6 // Ignored: Inlined leading underscore at ComputeNode.v:58
	vcdp->declBus(c+2,"ComputeNode left_R_data",-1,15,0);
	// Tracing: ComputeNode _RAND_7 // Ignored: Inlined leading underscore at ComputeNode.v:60
	vcdp->declBit(c+11,"ComputeNode left_valid_R",-1);
	// Tracing: ComputeNode _RAND_8 // Ignored: Inlined leading underscore at ComputeNode.v:62
	vcdp->declBus(c+12,"ComputeNode right_R_taskID",-1,9,0);
	// Tracing: ComputeNode _RAND_9 // Ignored: Inlined leading underscore at ComputeNode.v:64
	vcdp->declBus(c+3,"ComputeNode right_R_data",-1,15,0);
	// Tracing: ComputeNode _RAND_10 // Ignored: Inlined leading underscore at ComputeNode.v:66
	vcdp->declBit(c+13,"ComputeNode right_valid_R",-1);
	// Tracing: ComputeNode _RAND_11 // Ignored: Inlined leading underscore at ComputeNode.v:68
	// Tracing: ComputeNode _T_105 // Ignored: Inlined leading underscore at ComputeNode.v:69
	vcdp->declBus(c+14,"ComputeNode task_ID_R",-1,9,0);
	vcdp->declBit(c+15,"ComputeNode out_data_R_predicate",-1);
	// Tracing: ComputeNode _RAND_12 // Ignored: Inlined leading underscore at ComputeNode.v:72
	vcdp->declBus(c+16,"ComputeNode out_data_R_data",-1,15,0);
	// Tracing: ComputeNode _RAND_13 // Ignored: Inlined leading underscore at ComputeNode.v:74
	vcdp->declBit(c+17,"ComputeNode state",-1);
	// Tracing: ComputeNode _RAND_14 // Ignored: Inlined leading underscore at ComputeNode.v:76
	// Tracing: ComputeNode _T_114 // Ignored: Inlined leading underscore at ComputeNode.v:77
	// Tracing: ComputeNode _GEN_7 // Ignored: Inlined leading underscore at ComputeNode.v:78
	// Tracing: ComputeNode _GEN_8 // Ignored: Inlined leading underscore at ComputeNode.v:79
	// Tracing: ComputeNode _GEN_9 // Ignored: Inlined leading underscore at ComputeNode.v:80
	// Tracing: ComputeNode _T_117 // Ignored: Inlined leading underscore at ComputeNode.v:81
	// Tracing: ComputeNode _GEN_11 // Ignored: Inlined leading underscore at ComputeNode.v:82
	// Tracing: ComputeNode _GEN_12 // Ignored: Inlined leading underscore at ComputeNode.v:83
	// Tracing: ComputeNode _GEN_13 // Ignored: Inlined leading underscore at ComputeNode.v:84
	// Tracing: ComputeNode _T_119 // Ignored: Inlined leading underscore at ComputeNode.v:85
	// Tracing: ComputeNode _T_121 // Ignored: Inlined leading underscore at ComputeNode.v:86
	// Tracing: ComputeNode _T_122 // Ignored: Inlined leading underscore at ComputeNode.v:87
	// Tracing: ComputeNode _T_123 // Ignored: Inlined leading underscore at ComputeNode.v:88
	// Tracing: ComputeNode _GEN_14 // Ignored: Inlined leading underscore at ComputeNode.v:89
	// Tracing: ComputeNode _GEN_17 // Ignored: Inlined leading underscore at ComputeNode.v:90
	// Tracing: ComputeNode _GEN_18 // Ignored: Inlined leading underscore at ComputeNode.v:91
	// Tracing: ComputeNode _GEN_19 // Ignored: Inlined leading underscore at ComputeNode.v:92
	// Tracing: ComputeNode _GEN_20 // Ignored: Inlined leading underscore at ComputeNode.v:93
	// Tracing: ComputeNode _T_132 // Ignored: Inlined leading underscore at ComputeNode.v:94
	// Tracing: ComputeNode _T_140 // Ignored: Inlined leading underscore at ComputeNode.v:95
	// Tracing: ComputeNode _GEN_22 // Ignored: Inlined leading underscore at ComputeNode.v:96
	// Tracing: ComputeNode _GEN_23 // Ignored: Inlined leading underscore at ComputeNode.v:97
	// Tracing: ComputeNode _GEN_24 // Ignored: Inlined leading underscore at ComputeNode.v:98
	// Tracing: ComputeNode _GEN_25 // Ignored: Inlined leading underscore at ComputeNode.v:99
	// Tracing: ComputeNode _GEN_26 // Ignored: Inlined leading underscore at ComputeNode.v:100
	// Tracing: ComputeNode _GEN_27 // Ignored: Inlined leading underscore at ComputeNode.v:101
	// Tracing: ComputeNode _GEN_28 // Ignored: Inlined leading underscore at ComputeNode.v:102
	// Tracing: ComputeNode _GEN_29 // Ignored: Inlined leading underscore at ComputeNode.v:103
	// Tracing: ComputeNode _GEN_30 // Ignored: Inlined leading underscore at ComputeNode.v:104
	// Tracing: ComputeNode _GEN_31 // Ignored: Inlined leading underscore at ComputeNode.v:105
	// Tracing: ComputeNode _GEN_32 // Ignored: Inlined leading underscore at ComputeNode.v:106
	// Tracing: ComputeNode _GEN_33 // Ignored: Inlined leading underscore at ComputeNode.v:107
	// Tracing: ComputeNode _GEN_34 // Ignored: Inlined leading underscore at ComputeNode.v:108
	// Tracing: ComputeNode _GEN_35 // Ignored: Inlined leading underscore at ComputeNode.v:109
	// Tracing: ComputeNode _GEN_36 // Ignored: Inlined leading underscore at ComputeNode.v:110
	// Tracing: ComputeNode _GEN_37 // Ignored: Inlined leading underscore at ComputeNode.v:111
	// Tracing: ComputeNode _GEN_39 // Ignored: Inlined leading underscore at ComputeNode.v:112
	// Tracing: ComputeNode _GEN_40 // Ignored: Inlined leading underscore at ComputeNode.v:113
	// Tracing: ComputeNode _GEN_41 // Ignored: Inlined leading underscore at ComputeNode.v:114
	// Tracing: ComputeNode _GEN_42 // Ignored: Inlined leading underscore at ComputeNode.v:115
	// Tracing: ComputeNode _GEN_43 // Ignored: Inlined leading underscore at ComputeNode.v:116
	// Tracing: ComputeNode _GEN_44 // Ignored: Inlined leading underscore at ComputeNode.v:117
	// Tracing: ComputeNode _GEN_45 // Ignored: Inlined leading underscore at ComputeNode.v:118
	vcdp->declBus(c+2,"ComputeNode FU io_in1",-1,15,0);
	vcdp->declBus(c+3,"ComputeNode FU io_in2",-1,15,0);
	vcdp->declBus(c+1,"ComputeNode FU io_out",-1,15,0);
	// Tracing: ComputeNode FU _T_11 // Ignored: Inlined leading underscore at ComputeNode.v:6
    }
}

void VComputeNode::traceFullThis__1(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->ComputeNode__DOT__FU_io_out),16);
	vcdp->fullBus(c+2,(vlTOPp->ComputeNode__DOT__left_R_data),16);
	vcdp->fullBus(c+3,(vlTOPp->ComputeNode__DOT__right_R_data),16);
	vcdp->fullBus(c+4,(vlTOPp->ComputeNode__DOT__enable_R_taskID),10);
	vcdp->fullBit(c+5,(vlTOPp->ComputeNode__DOT__enable_R_control));
	vcdp->fullBit(c+6,(vlTOPp->ComputeNode__DOT__enable_valid_R));
	vcdp->fullBit(c+7,(vlTOPp->ComputeNode__DOT__out_ready_R_0));
	vcdp->fullBit(c+8,(vlTOPp->ComputeNode__DOT__out_valid_R_0));
	vcdp->fullBus(c+9,(vlTOPp->ComputeNode__DOT__value),15);
	vcdp->fullBus(c+10,(vlTOPp->ComputeNode__DOT__left_R_taskID),10);
	vcdp->fullBit(c+11,(vlTOPp->ComputeNode__DOT__left_valid_R));
	vcdp->fullBus(c+12,(vlTOPp->ComputeNode__DOT__right_R_taskID),10);
	vcdp->fullBit(c+13,(vlTOPp->ComputeNode__DOT__right_valid_R));
	vcdp->fullBus(c+14,((((IData)(vlTOPp->ComputeNode__DOT__right_R_taskID) 
			      | (IData)(vlTOPp->ComputeNode__DOT__left_R_taskID)) 
			     | (IData)(vlTOPp->ComputeNode__DOT__enable_R_taskID))),10);
	vcdp->fullBit(c+15,(vlTOPp->ComputeNode__DOT__out_data_R_predicate));
	vcdp->fullBus(c+16,(vlTOPp->ComputeNode__DOT__out_data_R_data),16);
	vcdp->fullBit(c+17,(vlTOPp->ComputeNode__DOT__state));
	vcdp->fullBit(c+18,(vlTOPp->clock));
	vcdp->fullBit(c+19,(vlTOPp->reset));
	vcdp->fullBit(c+20,(vlTOPp->io_enable_ready));
	vcdp->fullBit(c+21,(vlTOPp->io_enable_valid));
	vcdp->fullBus(c+22,(vlTOPp->io_enable_bits_taskID),10);
	vcdp->fullBit(c+23,(vlTOPp->io_enable_bits_control));
	vcdp->fullBit(c+24,(vlTOPp->io_Out_0_ready));
	vcdp->fullBit(c+25,(vlTOPp->io_Out_0_valid));
	vcdp->fullBit(c+26,(vlTOPp->io_Out_0_bits_predicate));
	vcdp->fullBus(c+27,(vlTOPp->io_Out_0_bits_taskID),10);
	vcdp->fullBus(c+28,(vlTOPp->io_Out_0_bits_data),16);
	vcdp->fullBit(c+29,(vlTOPp->io_LeftIO_ready));
	vcdp->fullBit(c+30,(vlTOPp->io_LeftIO_valid));
	vcdp->fullBit(c+31,(vlTOPp->io_LeftIO_bits_predicate));
	vcdp->fullBus(c+32,(vlTOPp->io_LeftIO_bits_taskID),10);
	vcdp->fullBus(c+33,(vlTOPp->io_LeftIO_bits_data),16);
	vcdp->fullBit(c+34,(vlTOPp->io_RightIO_ready));
	vcdp->fullBit(c+35,(vlTOPp->io_RightIO_valid));
	vcdp->fullBit(c+36,(vlTOPp->io_RightIO_bits_predicate));
	vcdp->fullBus(c+37,(vlTOPp->io_RightIO_bits_taskID),10);
	vcdp->fullBus(c+38,(vlTOPp->io_RightIO_bits_data),16);
    }
}
