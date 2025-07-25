#include <iostream>
using namespace std;

int main() {
    unsigned int a = 5;  // binary:  0101
    unsigned int b = 9;  // binary:  1001

    cout << "a = " << a << ", b = " << b << endl;

    cout << "a & b = " << (a & b) << endl;  // bitwise AND
    cout << "a | b = " << (a | b) << endl;  // bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl;  // bitwise XOR
    cout << "~a = " << (~a) << endl;         // bitwise NOT

    cout << "a << 1 = " << (a << 1) << endl;  // left shift by 1 bit
    cout << "b >> 2 = " << (b >> 2) << endl;  // right shift by 2 bits

    return 0;
}
