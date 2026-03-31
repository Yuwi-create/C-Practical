#include <iostream>
using namespace std;

int computePower(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = " << computePower(base, exponent) << endl;
    return 0;
}
