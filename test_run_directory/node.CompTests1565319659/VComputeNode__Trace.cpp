// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComputeNode__Syms.h"


//======================

void VComputeNode::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VComputeNode* t=(VComputeNode*)userthis;
    VComputeNode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VComputeNode::traceChgThis(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VComputeNode::traceChgThis__2(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->ComputeNode__DOT__FU_io_out),32);
    }
}

void VComputeNode::traceChgThis__3(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+2,(vlTOPp->ComputeNode__DOT__left_R_data),32);
	vcdp->chgBus(c+3,(vlTOPp->ComputeNode__DOT__right_R_data),32);
	vcdp->chgBus(c+4,(vlTOPp->ComputeNode__DOT__enable_R_taskID),10);
	vcdp->chgBit(c+5,(vlTOPp->ComputeNode__DOT__enable_R_control));
	vcdp->chgBit(c+6,(vlTOPp->ComputeNode__DOT__enable_valid_R));
	vcdp->chgBit(c+7,(vlTOPp->ComputeNode__DOT__out_ready_R_0));
	vcdp->chgBit(c+8,(vlTOPp->ComputeNode__DOT__out_valid_R_0));
	vcdp->chgBus(c+9,(vlTOPp->ComputeNode__DOT__value),15);
	vcdp->chgBus(c+10,(vlTOPp->ComputeNode__DOT__left_R_taskID),10);
	vcdp->chgBit(c+11,(vlTOPp->ComputeNode__DOT__left_valid_R));
	vcdp->chgBus(c+12,(vlTOPp->ComputeNode__DOT__right_R_taskID),10);
	vcdp->chgBit(c+13,(vlTOPp->ComputeNode__DOT__right_valid_R));
	vcdp->chgBus(c+14,((((IData)(vlTOPp->ComputeNode__DOT__right_R_taskID) 
			     | (IData)(vlTOPp->ComputeNode__DOT__left_R_taskID)) 
			    | (IData)(vlTOPp->ComputeNode__DOT__enable_R_taskID))),10);
	vcdp->chgBit(c+15,(vlTOPp->ComputeNode__DOT__out_data_R_predicate));
	vcdp->chgBus(c+16,(vlTOPp->ComputeNode__DOT__out_data_R_data),32);
	vcdp->chgBit(c+17,(vlTOPp->ComputeNode__DOT__state));
    }
}

void VComputeNode::traceChgThis__4(VComputeNode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+18,(vlTOPp->clock));
	vcdp->chgBit(c+19,(vlTOPp->reset));
	vcdp->chgBit(c+20,(vlTOPp->io_enable_ready));
	vcdp->chgBit(c+21,(vlTOPp->io_enable_valid));
	vcdp->chgBus(c+22,(vlTOPp->io_enable_bits_taskID),10);
	vcdp->chgBit(c+23,(vlTOPp->io_enable_bits_control));
	vcdp->chgBit(c+24,(vlTOPp->io_Out_0_ready));
	vcdp->chgBit(c+25,(vlTOPp->io_Out_0_valid));
	vcdp->chgBit(c+26,(vlTOPp->io_Out_0_bits_predicate));
	vcdp->chgBus(c+27,(vlTOPp->io_Out_0_bits_taskID),10);
	vcdp->chgBus(c+28,(vlTOPp->io_Out_0_bits_data),32);
	vcdp->chgBit(c+29,(vlTOPp->io_LeftIO_ready));
	vcdp->chgBit(c+30,(vlTOPp->io_LeftIO_valid));
	vcdp->chgBit(c+31,(vlTOPp->io_LeftIO_bits_predicate));
	vcdp->chgBus(c+32,(vlTOPp->io_LeftIO_bits_taskID),10);
	vcdp->chgBus(c+33,(vlTOPp->io_LeftIO_bits_data),32);
	vcdp->chgBit(c+34,(vlTOPp->io_RightIO_ready));
	vcdp->chgBit(c+35,(vlTOPp->io_RightIO_valid));
	vcdp->chgBit(c+36,(vlTOPp->io_RightIO_bits_predicate));
	vcdp->chgBus(c+37,(vlTOPp->io_RightIO_bits_taskID),10);
	vcdp->chgBus(c+38,(vlTOPp->io_RightIO_bits_data),32);
    }
}
