module UALU(
  input  [31:0] io_in1,
  input  [31:0] io_in2,
  output [31:0] io_out
);
  wire [32:0] _T_11; // @[Alu.scala 153:32]
  assign _T_11 = io_in1 + io_in2; // @[Alu.scala 153:32]
  assign io_out = io_in1 + io_in2; // @[Alu.scala 208:10]
endmodule
module ComputeNode(
  input         clock,
  input         reset,
  output        io_enable_ready,
  input         io_enable_valid,
  input  [9:0]  io_enable_bits_taskID,
  input         io_enable_bits_control,
  input         io_Out_0_ready,
  output        io_Out_0_valid,
  output        io_Out_0_bits_predicate,
  output [9:0]  io_Out_0_bits_taskID,
  output [31:0] io_Out_0_bits_data,
  output        io_LeftIO_ready,
  input         io_LeftIO_valid,
  input         io_LeftIO_bits_predicate,
  input  [9:0]  io_LeftIO_bits_taskID,
  input  [31:0] io_LeftIO_bits_data,
  output        io_RightIO_ready,
  input         io_RightIO_valid,
  input         io_RightIO_bits_predicate,
  input  [9:0]  io_RightIO_bits_taskID,
  input  [31:0] io_RightIO_bits_data
);
  wire [31:0] FU_io_in1; // @[ComputeNode.scala 72:18]
  wire [31:0] FU_io_in2; // @[ComputeNode.scala 72:18]
  wire [31:0] FU_io_out; // @[ComputeNode.scala 72:18]
  reg [9:0] enable_R_taskID; // @[HandShaking.scala 168:31]
  reg [31:0] _RAND_0;
  reg  enable_R_control; // @[HandShaking.scala 168:31]
  reg [31:0] _RAND_1;
  reg  enable_valid_R; // @[HandShaking.scala 169:31]
  reg [31:0] _RAND_2;
  reg  out_ready_R_0; // @[HandShaking.scala 172:46]
  reg [31:0] _RAND_3;
  reg  out_valid_R_0; // @[HandShaking.scala 173:46]
  reg [31:0] _RAND_4;
  wire  _T_76; // @[Decoupled.scala 37:37]
  wire  _GEN_0; // @[HandShaking.scala 186:29]
  wire  _GEN_1; // @[HandShaking.scala 186:29]
  wire  _T_79; // @[Decoupled.scala 37:37]
  wire  _GEN_2; // @[HandShaking.scala 197:27]
  wire [9:0] _GEN_3; // @[HandShaking.scala 197:27]
  wire  _GEN_4; // @[HandShaking.scala 197:27]
  reg [14:0] value; // @[Counter.scala 26:33]
  reg [31:0] _RAND_5;
  wire [15:0] _T_86; // @[Counter.scala 35:22]
  wire [14:0] _T_87; // @[Counter.scala 35:22]
  reg [9:0] left_R_taskID; // @[ComputeNode.scala 49:23]
  reg [31:0] _RAND_6;
  reg [31:0] left_R_data; // @[ComputeNode.scala 49:23]
  reg [31:0] _RAND_7;
  reg  left_valid_R; // @[ComputeNode.scala 50:29]
  reg [31:0] _RAND_8;
  reg [9:0] right_R_taskID; // @[ComputeNode.scala 53:24]
  reg [31:0] _RAND_9;
  reg [31:0] right_R_data; // @[ComputeNode.scala 53:24]
  reg [31:0] _RAND_10;
  reg  right_valid_R; // @[ComputeNode.scala 54:30]
  reg [31:0] _RAND_11;
  wire [9:0] _T_105; // @[ComputeNode.scala 56:34]
  wire [9:0] task_ID_R; // @[ComputeNode.scala 56:50]
  reg  out_data_R_predicate; // @[ComputeNode.scala 59:27]
  reg [31:0] _RAND_12;
  reg [31:0] out_data_R_data; // @[ComputeNode.scala 59:27]
  reg [31:0] _RAND_13;
  reg  state; // @[ComputeNode.scala 62:22]
  reg [31:0] _RAND_14;
  wire  _T_114; // @[Decoupled.scala 37:37]
  wire [9:0] _GEN_7; // @[ComputeNode.scala 77:26]
  wire [31:0] _GEN_8; // @[ComputeNode.scala 77:26]
  wire  _GEN_9; // @[ComputeNode.scala 77:26]
  wire  _T_117; // @[Decoupled.scala 37:37]
  wire [9:0] _GEN_11; // @[ComputeNode.scala 83:27]
  wire [31:0] _GEN_12; // @[ComputeNode.scala 83:27]
  wire  _GEN_13; // @[ComputeNode.scala 83:27]
  wire [9:0] _T_119; // @[ComputeNode.scala 98:44]
  wire  _T_121; // @[Conditional.scala 37:30]
  wire  _T_122; // @[ComputeNode.scala 106:27]
  wire  _T_123; // @[ComputeNode.scala 106:43]
  wire [31:0] _GEN_14; // @[ComputeNode.scala 109:32]
  wire  _GEN_17; // @[ComputeNode.scala 106:61]
  wire  _GEN_18; // @[ComputeNode.scala 106:61]
  wire [31:0] _GEN_19; // @[ComputeNode.scala 106:61]
  wire  _GEN_20; // @[ComputeNode.scala 106:61]
  wire  _T_132; // @[HandShaking.scala 222:83]
  wire  _T_140; // @[ComputeNode.scala 134:17]
  wire  _GEN_22; // @[ComputeNode.scala 121:26]
  wire  _GEN_23; // @[ComputeNode.scala 121:26]
  wire  _GEN_24; // @[ComputeNode.scala 121:26]
  wire  _GEN_25; // @[ComputeNode.scala 121:26]
  wire  _GEN_26; // @[ComputeNode.scala 121:26]
  wire  _GEN_27; // @[ComputeNode.scala 121:26]
  wire  _GEN_28; // @[Conditional.scala 39:67]
  wire  _GEN_29; // @[Conditional.scala 39:67]
  wire  _GEN_30; // @[Conditional.scala 39:67]
  wire  _GEN_31; // @[Conditional.scala 39:67]
  wire  _GEN_32; // @[Conditional.scala 39:67]
  wire  _GEN_33; // @[Conditional.scala 39:67]
  wire  _GEN_34; // @[Conditional.scala 40:58]
  wire  _GEN_35; // @[Conditional.scala 40:58]
  wire [31:0] _GEN_36; // @[Conditional.scala 40:58]
  wire  _GEN_37; // @[Conditional.scala 40:58]
  wire  _GEN_39; // @[Conditional.scala 40:58]
  wire  _GEN_40; // @[Conditional.scala 40:58]
  wire  _GEN_41; // @[Conditional.scala 40:58]
  wire  _GEN_42; // @[Conditional.scala 40:58]
  wire  _GEN_43; // @[ComputeNode.scala 134:17]
  wire  _GEN_44; // @[ComputeNode.scala 134:17]
  wire  _GEN_45; // @[ComputeNode.scala 134:17]
  UALU FU ( // @[ComputeNode.scala 72:18]
    .io_in1(FU_io_in1),
    .io_in2(FU_io_in2),
    .io_out(FU_io_out)
  );
  assign _T_76 = io_Out_0_ready & io_Out_0_valid; // @[Decoupled.scala 37:37]
  assign _GEN_0 = _T_76 ? io_Out_0_ready : out_ready_R_0; // @[HandShaking.scala 186:29]
  assign _GEN_1 = _T_76 ? 1'h0 : out_valid_R_0; // @[HandShaking.scala 186:29]
  assign _T_79 = io_enable_ready & io_enable_valid; // @[Decoupled.scala 37:37]
  assign _GEN_2 = _T_79 ? io_enable_valid : enable_valid_R; // @[HandShaking.scala 197:27]
  assign _GEN_3 = _T_79 ? io_enable_bits_taskID : enable_R_taskID; // @[HandShaking.scala 197:27]
  assign _GEN_4 = _T_79 ? io_enable_bits_control : enable_R_control; // @[HandShaking.scala 197:27]
  assign _T_86 = value + 15'h1; // @[Counter.scala 35:22]
  assign _T_87 = value + 15'h1; // @[Counter.scala 35:22]
  assign _T_105 = right_R_taskID | left_R_taskID; // @[ComputeNode.scala 56:34]
  assign task_ID_R = _T_105 | enable_R_taskID; // @[ComputeNode.scala 56:50]
  assign _T_114 = io_LeftIO_ready & io_LeftIO_valid; // @[Decoupled.scala 37:37]
  assign _GEN_7 = _T_114 ? io_LeftIO_bits_taskID : left_R_taskID; // @[ComputeNode.scala 77:26]
  assign _GEN_8 = _T_114 ? io_LeftIO_bits_data : left_R_data; // @[ComputeNode.scala 77:26]
  assign _GEN_9 = _T_114 ? 1'h1 : left_valid_R; // @[ComputeNode.scala 77:26]
  assign _T_117 = io_RightIO_ready & io_RightIO_valid; // @[Decoupled.scala 37:37]
  assign _GEN_11 = _T_117 ? io_RightIO_bits_taskID : right_R_taskID; // @[ComputeNode.scala 83:27]
  assign _GEN_12 = _T_117 ? io_RightIO_bits_data : right_R_data; // @[ComputeNode.scala 83:27]
  assign _GEN_13 = _T_117 ? 1'h1 : right_valid_R; // @[ComputeNode.scala 83:27]
  assign _T_119 = left_R_taskID | right_R_taskID; // @[ComputeNode.scala 98:44]
  assign _T_121 = 1'h0 == state; // @[Conditional.scala 37:30]
  assign _T_122 = enable_valid_R & left_valid_R; // @[ComputeNode.scala 106:27]
  assign _T_123 = _T_122 & right_valid_R; // @[ComputeNode.scala 106:43]
  assign _GEN_14 = enable_R_control ? FU_io_out : 32'h0; // @[ComputeNode.scala 109:32]
  assign _GEN_17 = _T_123 ? 1'h1 : _GEN_1; // @[ComputeNode.scala 106:61]
  assign _GEN_18 = _T_123 ? 1'h1 : state; // @[ComputeNode.scala 106:61]
  assign _GEN_19 = _T_123 ? _GEN_14 : out_data_R_data; // @[ComputeNode.scala 106:61]
  assign _GEN_20 = _T_123 ? enable_R_control : out_data_R_predicate; // @[ComputeNode.scala 106:61]
  assign _T_132 = out_ready_R_0 | _T_76; // @[HandShaking.scala 222:83]
  assign _T_140 = reset == 1'h0; // @[ComputeNode.scala 134:17]
  assign _GEN_22 = _T_132 ? 1'h0 : _GEN_9; // @[ComputeNode.scala 121:26]
  assign _GEN_23 = _T_132 ? 1'h0 : _GEN_13; // @[ComputeNode.scala 121:26]
  assign _GEN_24 = _T_132 ? 1'h0 : state; // @[ComputeNode.scala 121:26]
  assign _GEN_25 = _T_132 ? 1'h0 : out_data_R_predicate; // @[ComputeNode.scala 121:26]
  assign _GEN_26 = _T_132 ? 1'h0 : _GEN_0; // @[ComputeNode.scala 121:26]
  assign _GEN_27 = _T_132 ? 1'h0 : _GEN_2; // @[ComputeNode.scala 121:26]
  assign _GEN_28 = state ? _GEN_22 : _GEN_9; // @[Conditional.scala 39:67]
  assign _GEN_29 = state ? _GEN_23 : _GEN_13; // @[Conditional.scala 39:67]
  assign _GEN_30 = state ? _GEN_24 : state; // @[Conditional.scala 39:67]
  assign _GEN_31 = state ? _GEN_25 : out_data_R_predicate; // @[Conditional.scala 39:67]
  assign _GEN_32 = state ? _GEN_26 : _GEN_0; // @[Conditional.scala 39:67]
  assign _GEN_33 = state ? _GEN_27 : _GEN_2; // @[Conditional.scala 39:67]
  assign _GEN_34 = _T_121 ? _GEN_17 : _GEN_1; // @[Conditional.scala 40:58]
  assign _GEN_35 = _T_121 ? _GEN_18 : _GEN_30; // @[Conditional.scala 40:58]
  assign _GEN_36 = _T_121 ? _GEN_19 : out_data_R_data; // @[Conditional.scala 40:58]
  assign _GEN_37 = _T_121 ? _GEN_20 : _GEN_31; // @[Conditional.scala 40:58]
  assign _GEN_39 = _T_121 ? _GEN_9 : _GEN_28; // @[Conditional.scala 40:58]
  assign _GEN_40 = _T_121 ? _GEN_13 : _GEN_29; // @[Conditional.scala 40:58]
  assign _GEN_41 = _T_121 ? _GEN_0 : _GEN_32; // @[Conditional.scala 40:58]
  assign _GEN_42 = _T_121 ? _GEN_2 : _GEN_33; // @[Conditional.scala 40:58]
  assign io_enable_ready = ~ enable_valid_R; // @[HandShaking.scala 196:19]
  assign io_Out_0_valid = out_valid_R_0; // @[HandShaking.scala 184:21]
  assign io_Out_0_bits_predicate = out_data_R_predicate; // @[ComputeNode.scala 97:20]
  assign io_Out_0_bits_taskID = _T_119 | enable_R_taskID; // @[ComputeNode.scala 97:20 ComputeNode.scala 98:27]
  assign io_Out_0_bits_data = out_data_R_data; // @[ComputeNode.scala 97:20]
  assign io_LeftIO_ready = ~ left_valid_R; // @[ComputeNode.scala 76:19]
  assign io_RightIO_ready = ~ right_valid_R; // @[ComputeNode.scala 82:20]
  assign FU_io_in1 = left_R_data; // @[ComputeNode.scala 73:13]
  assign FU_io_in2 = right_R_data; // @[ComputeNode.scala 74:13]
  assign _GEN_43 = _T_121 == 1'h0; // @[ComputeNode.scala 134:17]
  assign _GEN_44 = _GEN_43 & state; // @[ComputeNode.scala 134:17]
  assign _GEN_45 = _GEN_44 & _T_132; // @[ComputeNode.scala 134:17]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  enable_R_taskID = _RAND_0[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  enable_R_control = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  enable_valid_R = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  out_ready_R_0 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  out_valid_R_0 = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  value = _RAND_5[14:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  left_R_taskID = _RAND_6[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  left_R_data = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  left_valid_R = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  right_R_taskID = _RAND_9[9:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  right_R_data = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  right_valid_R = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  out_data_R_predicate = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  out_data_R_data = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  state = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      enable_R_taskID <= 10'h0;
    end else begin
      if (_T_79) begin
        enable_R_taskID <= io_enable_bits_taskID;
      end
    end
    if (reset) begin
      enable_R_control <= 1'h0;
    end else begin
      if (_T_79) begin
        enable_R_control <= io_enable_bits_control;
      end
    end
    if (reset) begin
      enable_valid_R <= 1'h0;
    end else begin
      if (_T_121) begin
        if (_T_79) begin
          enable_valid_R <= io_enable_valid;
        end
      end else begin
        if (state) begin
          if (_T_132) begin
            enable_valid_R <= 1'h0;
          end else begin
            if (_T_79) begin
              enable_valid_R <= io_enable_valid;
            end
          end
        end else begin
          if (_T_79) begin
            enable_valid_R <= io_enable_valid;
          end
        end
      end
    end
    if (reset) begin
      out_ready_R_0 <= 1'h0;
    end else begin
      if (_T_121) begin
        if (_T_76) begin
          out_ready_R_0 <= io_Out_0_ready;
        end
      end else begin
        if (state) begin
          if (_T_132) begin
            out_ready_R_0 <= 1'h0;
          end else begin
            if (_T_76) begin
              out_ready_R_0 <= io_Out_0_ready;
            end
          end
        end else begin
          if (_T_76) begin
            out_ready_R_0 <= io_Out_0_ready;
          end
        end
      end
    end
    if (reset) begin
      out_valid_R_0 <= 1'h0;
    end else begin
      if (_T_121) begin
        if (_T_123) begin
          out_valid_R_0 <= 1'h1;
        end else begin
          if (_T_76) begin
            out_valid_R_0 <= 1'h0;
          end
        end
      end else begin
        if (_T_76) begin
          out_valid_R_0 <= 1'h0;
        end
      end
    end
    if (reset) begin
      value <= 15'h0;
    end else begin
      value <= _T_87;
    end
    if (reset) begin
      left_R_taskID <= 10'h0;
    end else begin
      if (_T_114) begin
        left_R_taskID <= io_LeftIO_bits_taskID;
      end
    end
    if (reset) begin
      left_R_data <= 32'h0;
    end else begin
      if (_T_114) begin
        left_R_data <= io_LeftIO_bits_data;
      end
    end
    if (reset) begin
      left_valid_R <= 1'h0;
    end else begin
      if (_T_121) begin
        if (_T_114) begin
          left_valid_R <= 1'h1;
        end
      end else begin
        if (state) begin
          if (_T_132) begin
            left_valid_R <= 1'h0;
          end else begin
            if (_T_114) begin
              left_valid_R <= 1'h1;
            end
          end
        end else begin
          if (_T_114) begin
            left_valid_R <= 1'h1;
          end
        end
      end
    end
    if (reset) begin
      right_R_taskID <= 10'h0;
    end else begin
      if (_T_117) begin
        right_R_taskID <= io_RightIO_bits_taskID;
      end
    end
    if (reset) begin
      right_R_data <= 32'h0;
    end else begin
      if (_T_117) begin
        right_R_data <= io_RightIO_bits_data;
      end
    end
    if (reset) begin
      right_valid_R <= 1'h0;
    end else begin
      if (_T_121) begin
        if (_T_117) begin
          right_valid_R <= 1'h1;
        end
      end else begin
        if (state) begin
          if (_T_132) begin
            right_valid_R <= 1'h0;
          end else begin
            if (_T_117) begin
              right_valid_R <= 1'h1;
            end
          end
        end else begin
          if (_T_117) begin
            right_valid_R <= 1'h1;
          end
        end
      end
    end
    if (reset) begin
      out_data_R_predicate <= 1'h0;
    end else begin
      if (_T_121) begin
        if (_T_123) begin
          out_data_R_predicate <= enable_R_control;
        end
      end else begin
        if (state) begin
          if (_T_132) begin
            out_data_R_predicate <= 1'h0;
          end
        end
      end
    end
    if (reset) begin
      out_data_R_data <= 32'h0;
    end else begin
      if (_T_121) begin
        if (_T_123) begin
          if (enable_R_control) begin
            out_data_R_data <= FU_io_out;
          end else begin
            out_data_R_data <= 32'h0;
          end
        end
      end
    end
    if (reset) begin
      state <= 1'h0;
    end else begin
      if (_T_121) begin
        if (_T_123) begin
          state <= 1'h1;
        end
      end else begin
        if (state) begin
          if (_T_132) begin
            state <= 1'h0;
          end
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_45 & _T_140) begin
          $fwrite(32'h80000002,"[LOG] [ComputeNode] [TID->%d] [COMPUTE] $anonfun: Output fired @ %d, Value: %d (%d + %d)\n",task_ID_R,value,FU_io_out,left_R_data,right_R_data); // @[ComputeNode.scala 134:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
