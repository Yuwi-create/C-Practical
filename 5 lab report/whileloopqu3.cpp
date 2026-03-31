#include <iostream>

int main() {
    int num, reversedNumber = 0;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit; 
        num /= 10; 
    }

    cout << "Reversed Number: " << reversedNumber <<endl;
    return 0;
}
