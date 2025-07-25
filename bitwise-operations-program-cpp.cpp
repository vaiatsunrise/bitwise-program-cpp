#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101 in binary
    int b = 9;  // 1001 in binary

    cout << "a & b = " << (a & b) << endl;  // AND
    cout << "a | b = " << (a | b) << endl;  // OR
    cout << "a ^ b = " << (a ^ b) << endl;  // XOR
    cout << "~a = " << (~a) << endl;         // NOT
    cout << "b << 1 = " << (b << 1) << endl; // Left shift
    cout << "b >> 1 = " << (b >> 1) << endl; // Right shift

    return 0;
}
