#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    cout << "Enter 10 numbers: " << endl;
 
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    cout << "Number of Positive numbers: " << positiveCount << endl;
    cout << "Number of Negative numbers: " << negativeCount << endl;
    cout << "Number of Zeros: " << zeroCount << endl;

    return 0;
}