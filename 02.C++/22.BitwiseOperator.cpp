#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 4;
    b = 8;

    // AND -- &
    // If both values are '1' , the answer is '1' , else '0'
    cout << "AND = " << (a & b) << endl;

    // OR -- |
    // If both values are '0' , the answer is '0' , else '1'
    cout << "OR = " << (a | b) << endl;

    // EX-OR -- ^
    // If BOTH values are DIFFERENT , the answer is '1' 
    // else if BOTH values are SAME the answer is '0'
    cout << "EX-OR = " << (a ^ b) << endl;

    // Bitwise left shift -- <<
    // It shifts the BITS to LEFT by 'n' times
    // and fills the rest by 0
    // Simple formula -- a*2^b 
    cout << "Bitwise Left shift = " << (10 << 2) << endl;

    // Bitwise right shift -- >>
    // It shifts the BITS to RIGHT by 'n' times
    // and fills the rest by 0
    // Simple formula -- a/2^b
    cout << "Bitwise right shift = " << (10 >> 1) << endl;

    return 0;
}