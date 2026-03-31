#include <iostream>
using namespace std;

int main() {
    int arr[10];  
    int sum = 0, min, max;
    float average;

    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];

    for (int i = 0; i <10; i++) {
        sum += arr[i]; 
        if (arr[i] < min) {
            min = arr[i]; 
        }
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
     
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
    cout << "Average value: " << average << endl;

    
    cout << "Array elements in reverse order:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

