#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number is " << reverseNumber(n) << endl;
    return 0;
}
