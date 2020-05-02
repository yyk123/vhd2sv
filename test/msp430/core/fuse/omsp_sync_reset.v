// Converted from msp430/core/fuse/omsp_sync_reset.vhd
// by verilog2vhdl - QueenField


//============================================================================--
//==                                          __ _      _     _             ==--
//==                                         / _(_)    | |   | |            ==--
//==              __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |            ==--
//==             / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |            ==--
//==            | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |            ==--
//==             \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|            ==--
//==                | |                                                     ==--
//==                |_|                                                     ==--
//==                                                                        ==--
//==                                                                        ==--
//==            MSP430 CPU                                                  ==--
//==            Processing Unit                                             ==--
//==                                                                        ==--
//============================================================================--
// Copyright (c) 2015-2016 by the author(s)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// =============================================================================
// Author(s):
//   Francisco Javier Reina Campo <frareicam@gmail.com>
//
module omsp_sync_reset(rst_s, clk, rst_a);
  output   rst_s;
  input   clk;
  input   rst_a;

  reg  [1:0] data_sync;

  always @(clk or rst_a) begin
    if (rst_a == 1'b1) begin
      data_sync <= {(1 - 0 + 1){1'b1}};
    end else if (rising_edge[clk]) begin
      data_sync <= {data_sync[0], 1'b0};
    end
  end
  assign rst_s = data_sync[1];
endmodule