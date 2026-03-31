#include <iostream>
using namespace std;

int calculateSquare(int num) {
    return num * num;
}
double calculateSquare(double num) {
    return num * num;
}

int main() {
    int intNum;
    double doubleNum;

    cout << "Enter an integer: ";
    cin >> intNum;
    cout << "The square of " << intNum << " is: " << calculateSquare(intNum) << endl;

    cout << "Enter a double: ";
    cin >> doubleNum;
    cout << "The square of " << doubleNum << " is: " << calculateSquare(doubleNum) << endl;

    return 0;
}


