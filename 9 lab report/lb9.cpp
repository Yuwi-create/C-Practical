#include <iostream>
using namespace std;

string checkOddEven(int num) {
    if (num % 2 == 0)
        return "Even";
    else
        return "Odd";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The number is " << checkOddEven(n) << endl;
    return 0;
}
