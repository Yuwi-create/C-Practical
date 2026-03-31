#include <iostream>
using namespace std;

int main() {
    int marks[10];
    int maxMark, minMark;
    double sum = 0;

    cout << "Enter the marks of 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter mark for student " << i + 1 << ": ";
        cin >> marks[i];
    }
    maxMark = marks[0];
    minMark = marks[0];

    for (int i = 0; i < 10; i++) {
        sum += marks[i];

        if (marks[i] > maxMark) {
            maxMark = marks[i];
        }
        if (marks[i] < minMark) {
            minMark = marks[i];
        }
    }

    double average = sum / 10;

    cout << "Maximum Marks: " << maxMark << endl;
    cout << "Minimum Marks: " << minMark << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}