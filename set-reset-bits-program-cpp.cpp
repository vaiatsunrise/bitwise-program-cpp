#include <iostream>
using namespace std;

int main() {
    int num, pos;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter bit position to set (0-based): ";
    cin >> pos;

    // Set bit
    int setNum = num | (1 << pos);
    cout << "Number after setting bit " << pos << ": " << setNum << endl;

    // Reset bit
    int resetNum = num & ~(1 << pos);
    cout << "Number after resetting bit " << pos << ": " << resetNum << endl;

    return 0;
}
