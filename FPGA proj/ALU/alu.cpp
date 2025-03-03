#include <ap_int.h>

void ALU_4bit(ap_uint<4> A, ap_uint<4> B, ap_uint<3> opcode, ap_uint<4> &result, bool &carry_out) {
    #pragma HLS INTERFACE ap_ctrl_none port=return
    #pragma HLS INTERFACE ap_none port=A
    #pragma HLS INTERFACE ap_none port=B
    #pragma HLS INTERFACE ap_none port=opcode
    #pragma HLS INTERFACE ap_none port=result
    #pragma HLS INTERFACE ap_none port=carry_out

    switch (opcode) {
        case 0: // Addition
            result = A + B;
            carry_out = (A + B) > 15;
            break;
        case 1: // Subtraction
            result = A - B;
            carry_out = (A < B);
            break;
        case 2: // Bitwise AND
            result = A & B;
            carry_out = 0;
            break;
        case 3: // Bitwise OR
            result = A | B;
            carry_out = 0;
            break;
        case 4: // Bitwise XOR
            result = A ^ B;
            carry_out = 0;
            break;
        default:
            result = 0;
            carry_out = 0;
    }
}
