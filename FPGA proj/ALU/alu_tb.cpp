#include <iostream>
#include <ap_int.h>
using namespace std;

void ALU_4bit(ap_uint<4> A, ap_uint<4> B, ap_uint<3> opcode, ap_uint<4> &result, bool &carry_out);

int main() {
    ap_uint<4> A, B, result;
    ap_uint<3> opcode;
    bool carry_out;

    // Test addition
    A = 5; B = 3; opcode = 0;
    ALU_4bit(A, B, opcode, result, carry_out);
    cout << "Addition: " << result << ", Carry: " << carry_out << endl;

    // Test subtraction
    A = 9; B = 2; opcode = 1;
    ALU_4bit(A, B, opcode, result, carry_out);
    cout << "Subtraction: " << result << ", Carry: " << carry_out << endl;

    // Test AND
    A = 12; B = 10; opcode = 2;
    ALU_4bit(A, B, opcode, result, carry_out);
    cout << "AND: " << result << endl;

    // Test OR
    A = 12; B = 10; opcode = 3;
    ALU_4bit(A, B, opcode, result, carry_out);
    cout << "OR: " << result << endl;

    // Test XOR
    A = 12; B = 10; opcode = 4;
    ALU_4bit(A, B, opcode, result, carry_out);
    cout << "XOR: " << result << endl;

    return 0;
}
