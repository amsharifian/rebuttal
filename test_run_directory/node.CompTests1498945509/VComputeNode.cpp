// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeNode.h for the primary calling header

#include "VComputeNode.h"      // For This
#include "VComputeNode__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VComputeNode) {
    VComputeNode__Syms* __restrict vlSymsp = __VlSymsp = new VComputeNode__Syms(this, name());
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VComputeNode::__Vconfigure(VComputeNode__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VComputeNode::~VComputeNode() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VComputeNode::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VComputeNode::eval\n"); );
    VComputeNode__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VComputeNode::_eval_initial_loop(VComputeNode__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VComputeNode::_sequent__TOP__1(VComputeNode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_sequent__TOP__1\n"); );
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__ComputeNode__DOT__state,0,0);
    // Body
    __Vdly__ComputeNode__DOT__state = vlTOPp->ComputeNode__DOT__state;
    // ALWAYS at ComputeNode.v:272
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((((IData)(vlTOPp->ComputeNode__DOT__state) 
			  & (IData)(vlTOPp->ComputeNode__DOT___T_132)) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"[LOG] [ComputeNode] [TID->%4#] [COMPUTE] $anonfun: Output fired @ %5#, Value: %10# (%10# + %10#)\n",
		       10,(((IData)(vlTOPp->ComputeNode__DOT__right_R_taskID) 
			    | (IData)(vlTOPp->ComputeNode__DOT__left_R_taskID)) 
			   | (IData)(vlTOPp->ComputeNode__DOT__enable_R_taskID)),
		       15,(IData)(vlTOPp->ComputeNode__DOT__value),
		       32,vlTOPp->ComputeNode__DOT__FU_io_out,
		       32,vlTOPp->ComputeNode__DOT__left_R_data,
		       32,vlTOPp->ComputeNode__DOT__right_R_data);
	}
    }
    // ALWAYS at ComputeNode.v:272
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__out_valid_R_0 = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT__state) {
	    if (vlTOPp->ComputeNode__DOT___T_76) {
		vlTOPp->ComputeNode__DOT__out_valid_R_0 = 0U;
	    }
	} else {
	    if (vlTOPp->ComputeNode__DOT___T_123) {
		vlTOPp->ComputeNode__DOT__out_valid_R_0 = 1U;
	    } else {
		if (vlTOPp->ComputeNode__DOT___T_76) {
		    vlTOPp->ComputeNode__DOT__out_valid_R_0 = 0U;
		}
	    }
	}
    }
    // ALWAYS at ComputeNode.v:272
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__enable_valid_R = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_121) {
	    if (vlTOPp->ComputeNode__DOT___T_79) {
		vlTOPp->ComputeNode__DOT__enable_valid_R 
		    = vlTOPp->io_enable_valid;
	    }
	} else {
	    if (vlTOPp->ComputeNode__DOT__state) {
		if (vlTOPp->ComputeNode__DOT___T_132) {
		    vlTOPp->ComputeNode__DOT__enable_valid_R = 0U;
		} else {
		    if (vlTOPp->ComputeNode__DOT___T_79) {
			vlTOPp->ComputeNode__DOT__enable_valid_R 
			    = vlTOPp->io_enable_valid;
		    }
		}
	    } else {
		if (vlTOPp->ComputeNode__DOT___T_79) {
		    vlTOPp->ComputeNode__DOT__enable_valid_R 
			= vlTOPp->io_enable_valid;
		}
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__out_data_R_data = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_121) {
	    if (vlTOPp->ComputeNode__DOT___T_123) {
		vlTOPp->ComputeNode__DOT__out_data_R_data 
		    = ((IData)(vlTOPp->ComputeNode__DOT__enable_R_control)
		        ? vlTOPp->ComputeNode__DOT__FU_io_out
		        : 0U);
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__out_ready_R_0 = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_121) {
	    if (vlTOPp->ComputeNode__DOT___T_76) {
		vlTOPp->ComputeNode__DOT__out_ready_R_0 
		    = vlTOPp->io_Out_0_ready;
	    }
	} else {
	    if (vlTOPp->ComputeNode__DOT__state) {
		if (vlTOPp->ComputeNode__DOT___T_132) {
		    vlTOPp->ComputeNode__DOT__out_ready_R_0 = 0U;
		} else {
		    if (vlTOPp->ComputeNode__DOT___T_76) {
			vlTOPp->ComputeNode__DOT__out_ready_R_0 
			    = vlTOPp->io_Out_0_ready;
		    }
		}
	    } else {
		if (vlTOPp->ComputeNode__DOT___T_76) {
		    vlTOPp->ComputeNode__DOT__out_ready_R_0 
			= vlTOPp->io_Out_0_ready;
		}
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__left_valid_R = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_121) {
	    if (vlTOPp->ComputeNode__DOT___T_114) {
		vlTOPp->ComputeNode__DOT__left_valid_R = 1U;
	    }
	} else {
	    if (vlTOPp->ComputeNode__DOT__state) {
		if (vlTOPp->ComputeNode__DOT___T_132) {
		    vlTOPp->ComputeNode__DOT__left_valid_R = 0U;
		} else {
		    if (vlTOPp->ComputeNode__DOT___T_114) {
			vlTOPp->ComputeNode__DOT__left_valid_R = 1U;
		    }
		}
	    } else {
		if (vlTOPp->ComputeNode__DOT___T_114) {
		    vlTOPp->ComputeNode__DOT__left_valid_R = 1U;
		}
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__right_valid_R = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_121) {
	    if (vlTOPp->ComputeNode__DOT___T_117) {
		vlTOPp->ComputeNode__DOT__right_valid_R = 1U;
	    }
	} else {
	    if (vlTOPp->ComputeNode__DOT__state) {
		if (vlTOPp->ComputeNode__DOT___T_132) {
		    vlTOPp->ComputeNode__DOT__right_valid_R = 0U;
		} else {
		    if (vlTOPp->ComputeNode__DOT___T_117) {
			vlTOPp->ComputeNode__DOT__right_valid_R = 1U;
		    }
		}
	    } else {
		if (vlTOPp->ComputeNode__DOT___T_117) {
		    vlTOPp->ComputeNode__DOT__right_valid_R = 1U;
		}
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__out_data_R_predicate = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_121) {
	    if (vlTOPp->ComputeNode__DOT___T_123) {
		vlTOPp->ComputeNode__DOT__out_data_R_predicate 
		    = vlTOPp->ComputeNode__DOT__enable_R_control;
	    }
	} else {
	    if (vlTOPp->ComputeNode__DOT__state) {
		if (vlTOPp->ComputeNode__DOT___T_132) {
		    vlTOPp->ComputeNode__DOT__out_data_R_predicate = 0U;
		}
	    }
	}
    }
    if (vlTOPp->reset) {
	__Vdly__ComputeNode__DOT__state = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_121) {
	    if (vlTOPp->ComputeNode__DOT___T_123) {
		__Vdly__ComputeNode__DOT__state = 1U;
	    }
	} else {
	    if (vlTOPp->ComputeNode__DOT__state) {
		if (vlTOPp->ComputeNode__DOT___T_132) {
		    __Vdly__ComputeNode__DOT__state = 0U;
		}
	    }
	}
    }
    vlTOPp->ComputeNode__DOT__state = __Vdly__ComputeNode__DOT__state;
    // ALWAYS at ComputeNode.v:272
    vlTOPp->ComputeNode__DOT__value = ((IData)(vlTOPp->reset)
				        ? 0U : (IData)(vlTOPp->ComputeNode__DOT___T_87));
    // ALWAYS at ComputeNode.v:272
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__left_R_data = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_114) {
	    vlTOPp->ComputeNode__DOT__left_R_data = vlTOPp->io_LeftIO_bits_data;
	}
    }
    // ALWAYS at ComputeNode.v:272
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__right_R_data = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_117) {
	    vlTOPp->ComputeNode__DOT__right_R_data 
		= vlTOPp->io_RightIO_bits_data;
	}
    }
    // ALWAYS at ComputeNode.v:272
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__right_R_taskID = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_117) {
	    vlTOPp->ComputeNode__DOT__right_R_taskID 
		= vlTOPp->io_RightIO_bits_taskID;
	}
    }
    // ALWAYS at ComputeNode.v:272
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__left_R_taskID = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_114) {
	    vlTOPp->ComputeNode__DOT__left_R_taskID 
		= vlTOPp->io_LeftIO_bits_taskID;
	}
    }
    // ALWAYS at ComputeNode.v:272
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__enable_R_taskID = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_79) {
	    vlTOPp->ComputeNode__DOT__enable_R_taskID 
		= vlTOPp->io_enable_bits_taskID;
	}
    }
    vlTOPp->io_Out_0_valid = vlTOPp->ComputeNode__DOT__out_valid_R_0;
    vlTOPp->io_Out_0_bits_data = vlTOPp->ComputeNode__DOT__out_data_R_data;
    vlTOPp->io_Out_0_bits_predicate = vlTOPp->ComputeNode__DOT__out_data_R_predicate;
    vlTOPp->ComputeNode__DOT___T_121 = (1U & (~ (IData)(vlTOPp->ComputeNode__DOT__state)));
    vlTOPp->io_enable_ready = (1U & (~ (IData)(vlTOPp->ComputeNode__DOT__enable_valid_R)));
    vlTOPp->io_LeftIO_ready = (1U & (~ (IData)(vlTOPp->ComputeNode__DOT__left_valid_R)));
    vlTOPp->ComputeNode__DOT___T_123 = (((IData)(vlTOPp->ComputeNode__DOT__enable_valid_R) 
					 & (IData)(vlTOPp->ComputeNode__DOT__left_valid_R)) 
					& (IData)(vlTOPp->ComputeNode__DOT__right_valid_R));
    vlTOPp->io_RightIO_ready = (1U & (~ (IData)(vlTOPp->ComputeNode__DOT__right_valid_R)));
    // ALWAYS at ComputeNode.v:272
    if (vlTOPp->reset) {
	vlTOPp->ComputeNode__DOT__enable_R_control = 0U;
    } else {
	if (vlTOPp->ComputeNode__DOT___T_79) {
	    vlTOPp->ComputeNode__DOT__enable_R_control 
		= vlTOPp->io_enable_bits_control;
	}
    }
    vlTOPp->ComputeNode__DOT___T_87 = (0x7fffU & ((IData)(1U) 
						  + (IData)(vlTOPp->ComputeNode__DOT__value)));
    vlTOPp->ComputeNode__DOT__FU_io_out = (vlTOPp->ComputeNode__DOT__left_R_data 
					   + vlTOPp->ComputeNode__DOT__right_R_data);
    vlTOPp->io_Out_0_bits_taskID = (((IData)(vlTOPp->ComputeNode__DOT__left_R_taskID) 
				     | (IData)(vlTOPp->ComputeNode__DOT__right_R_taskID)) 
				    | (IData)(vlTOPp->ComputeNode__DOT__enable_R_taskID));
}

void VComputeNode::_settle__TOP__2(VComputeNode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_settle__TOP__2\n"); );
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ComputeNode__DOT___T_121 = (1U & (~ (IData)(vlTOPp->ComputeNode__DOT__state)));
    vlTOPp->io_Out_0_bits_predicate = vlTOPp->ComputeNode__DOT__out_data_R_predicate;
    vlTOPp->io_Out_0_bits_data = vlTOPp->ComputeNode__DOT__out_data_R_data;
    vlTOPp->ComputeNode__DOT___T_123 = (((IData)(vlTOPp->ComputeNode__DOT__enable_valid_R) 
					 & (IData)(vlTOPp->ComputeNode__DOT__left_valid_R)) 
					& (IData)(vlTOPp->ComputeNode__DOT__right_valid_R));
    vlTOPp->io_enable_ready = (1U & (~ (IData)(vlTOPp->ComputeNode__DOT__enable_valid_R)));
    vlTOPp->io_LeftIO_ready = (1U & (~ (IData)(vlTOPp->ComputeNode__DOT__left_valid_R)));
    vlTOPp->io_RightIO_ready = (1U & (~ (IData)(vlTOPp->ComputeNode__DOT__right_valid_R)));
    vlTOPp->io_Out_0_valid = vlTOPp->ComputeNode__DOT__out_valid_R_0;
    vlTOPp->ComputeNode__DOT___T_87 = (0x7fffU & ((IData)(1U) 
						  + (IData)(vlTOPp->ComputeNode__DOT__value)));
    vlTOPp->ComputeNode__DOT__FU_io_out = (vlTOPp->ComputeNode__DOT__left_R_data 
					   + vlTOPp->ComputeNode__DOT__right_R_data);
    vlTOPp->io_Out_0_bits_taskID = (((IData)(vlTOPp->ComputeNode__DOT__left_R_taskID) 
				     | (IData)(vlTOPp->ComputeNode__DOT__right_R_taskID)) 
				    | (IData)(vlTOPp->ComputeNode__DOT__enable_R_taskID));
    vlTOPp->ComputeNode__DOT___T_79 = ((IData)(vlTOPp->io_enable_ready) 
				       & (IData)(vlTOPp->io_enable_valid));
    vlTOPp->ComputeNode__DOT___T_114 = ((IData)(vlTOPp->io_LeftIO_ready) 
					& (IData)(vlTOPp->io_LeftIO_valid));
    vlTOPp->ComputeNode__DOT___T_117 = ((IData)(vlTOPp->io_RightIO_ready) 
					& (IData)(vlTOPp->io_RightIO_valid));
    vlTOPp->ComputeNode__DOT___T_76 = ((IData)(vlTOPp->io_Out_0_ready) 
				       & (IData)(vlTOPp->io_Out_0_valid));
    vlTOPp->ComputeNode__DOT___T_132 = ((IData)(vlTOPp->ComputeNode__DOT__out_ready_R_0) 
					| (IData)(vlTOPp->ComputeNode__DOT___T_76));
}

VL_INLINE_OPT void VComputeNode::_combo__TOP__3(VComputeNode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_combo__TOP__3\n"); );
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ComputeNode__DOT___T_76 = ((IData)(vlTOPp->io_Out_0_ready) 
				       & (IData)(vlTOPp->io_Out_0_valid));
    vlTOPp->ComputeNode__DOT___T_114 = ((IData)(vlTOPp->io_LeftIO_ready) 
					& (IData)(vlTOPp->io_LeftIO_valid));
    vlTOPp->ComputeNode__DOT___T_117 = ((IData)(vlTOPp->io_RightIO_ready) 
					& (IData)(vlTOPp->io_RightIO_valid));
    vlTOPp->ComputeNode__DOT___T_79 = ((IData)(vlTOPp->io_enable_ready) 
				       & (IData)(vlTOPp->io_enable_valid));
    vlTOPp->ComputeNode__DOT___T_132 = ((IData)(vlTOPp->ComputeNode__DOT__out_ready_R_0) 
					| (IData)(vlTOPp->ComputeNode__DOT___T_76));
}

void VComputeNode::_eval(VComputeNode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_eval\n"); );
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VComputeNode::_eval_initial(VComputeNode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_eval_initial\n"); );
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VComputeNode::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::final\n"); );
    // Variables
    VComputeNode__Syms* __restrict vlSymsp = this->__VlSymsp;
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VComputeNode::_eval_settle(VComputeNode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_eval_settle\n"); );
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VComputeNode::_change_request(VComputeNode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_change_request\n"); );
    VComputeNode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VComputeNode::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_enable_valid & 0xfeU))) {
	Verilated::overWidthError("io_enable_valid");}
    if (VL_UNLIKELY((io_enable_bits_taskID & 0xfc00U))) {
	Verilated::overWidthError("io_enable_bits_taskID");}
    if (VL_UNLIKELY((io_enable_bits_control & 0xfeU))) {
	Verilated::overWidthError("io_enable_bits_control");}
    if (VL_UNLIKELY((io_Out_0_ready & 0xfeU))) {
	Verilated::overWidthError("io_Out_0_ready");}
    if (VL_UNLIKELY((io_LeftIO_valid & 0xfeU))) {
	Verilated::overWidthError("io_LeftIO_valid");}
    if (VL_UNLIKELY((io_LeftIO_bits_predicate & 0xfeU))) {
	Verilated::overWidthError("io_LeftIO_bits_predicate");}
    if (VL_UNLIKELY((io_LeftIO_bits_taskID & 0xfc00U))) {
	Verilated::overWidthError("io_LeftIO_bits_taskID");}
    if (VL_UNLIKELY((io_RightIO_valid & 0xfeU))) {
	Verilated::overWidthError("io_RightIO_valid");}
    if (VL_UNLIKELY((io_RightIO_bits_predicate & 0xfeU))) {
	Verilated::overWidthError("io_RightIO_bits_predicate");}
    if (VL_UNLIKELY((io_RightIO_bits_taskID & 0xfc00U))) {
	Verilated::overWidthError("io_RightIO_bits_taskID");}
}
#endif // VL_DEBUG

void VComputeNode::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeNode::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_enable_ready = VL_RAND_RESET_I(1);
    io_enable_valid = VL_RAND_RESET_I(1);
    io_enable_bits_taskID = VL_RAND_RESET_I(10);
    io_enable_bits_control = VL_RAND_RESET_I(1);
    io_Out_0_ready = VL_RAND_RESET_I(1);
    io_Out_0_valid = VL_RAND_RESET_I(1);
    io_Out_0_bits_predicate = VL_RAND_RESET_I(1);
    io_Out_0_bits_taskID = VL_RAND_RESET_I(10);
    io_Out_0_bits_data = VL_RAND_RESET_I(32);
    io_LeftIO_ready = VL_RAND_RESET_I(1);
    io_LeftIO_valid = VL_RAND_RESET_I(1);
    io_LeftIO_bits_predicate = VL_RAND_RESET_I(1);
    io_LeftIO_bits_taskID = VL_RAND_RESET_I(10);
    io_LeftIO_bits_data = VL_RAND_RESET_I(32);
    io_RightIO_ready = VL_RAND_RESET_I(1);
    io_RightIO_valid = VL_RAND_RESET_I(1);
    io_RightIO_bits_predicate = VL_RAND_RESET_I(1);
    io_RightIO_bits_taskID = VL_RAND_RESET_I(10);
    io_RightIO_bits_data = VL_RAND_RESET_I(32);
    ComputeNode__DOT__FU_io_out = VL_RAND_RESET_I(32);
    ComputeNode__DOT__enable_R_taskID = VL_RAND_RESET_I(10);
    ComputeNode__DOT__enable_R_control = VL_RAND_RESET_I(1);
    ComputeNode__DOT__enable_valid_R = VL_RAND_RESET_I(1);
    ComputeNode__DOT__out_ready_R_0 = VL_RAND_RESET_I(1);
    ComputeNode__DOT__out_valid_R_0 = VL_RAND_RESET_I(1);
    ComputeNode__DOT___T_76 = VL_RAND_RESET_I(1);
    ComputeNode__DOT___T_79 = VL_RAND_RESET_I(1);
    ComputeNode__DOT__value = VL_RAND_RESET_I(15);
    ComputeNode__DOT___T_87 = VL_RAND_RESET_I(15);
    ComputeNode__DOT__left_R_taskID = VL_RAND_RESET_I(10);
    ComputeNode__DOT__left_R_data = VL_RAND_RESET_I(32);
    ComputeNode__DOT__left_valid_R = VL_RAND_RESET_I(1);
    ComputeNode__DOT__right_R_taskID = VL_RAND_RESET_I(10);
    ComputeNode__DOT__right_R_data = VL_RAND_RESET_I(32);
    ComputeNode__DOT__right_valid_R = VL_RAND_RESET_I(1);
    ComputeNode__DOT__out_data_R_predicate = VL_RAND_RESET_I(1);
    ComputeNode__DOT__out_data_R_data = VL_RAND_RESET_I(32);
    ComputeNode__DOT__state = VL_RAND_RESET_I(1);
    ComputeNode__DOT___T_114 = VL_RAND_RESET_I(1);
    ComputeNode__DOT___T_117 = VL_RAND_RESET_I(1);
    ComputeNode__DOT___T_121 = VL_RAND_RESET_I(1);
    ComputeNode__DOT___T_123 = VL_RAND_RESET_I(1);
    ComputeNode__DOT___T_132 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
