#include <iostream>
using namespace std;

int* declareArray(int size) {
    return new int[size]; 
}

void assignValues(int arr[], int size) {
    cout << "Enter " << size << " values:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int* myArray = declareArray(n);
    assignValues(myArray, n);

    cout << "Values in array: ";
    for (int i = 0; i < n; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    delete[] myArray; 
    return 0;
}
