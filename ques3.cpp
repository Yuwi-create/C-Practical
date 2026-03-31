#include <iostream>
using namespace std;

int main() {
    int marks[10] , maxMark, minMark, sum=0;

    cout << "Enter Marks of 10 students: ";
    for (int i = 0; i < 10; ++i) {
        cin >> marks[i];
        if (marks[i] > maxMark) maxMark = marks[i];
        if (marks[i] < minMark) minMark = marks[i];
        sum += marks[i];
    }

    double average = sum / 10.0;
    cout << "maximum Marks: " << maxMark << endl;
    cout << "minimum Marks: " << minMark << endl;
    cout << "average Marks: " << average << endl;

    return 0;
}
