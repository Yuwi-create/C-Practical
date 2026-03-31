#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;
    
    int arr1[size], arr2[size], arr3[size];
    int scalarSum1 = 0, scalarSum2 = 0, scalarProduct = 0;
    
    cout << "Enter elements for array 1: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
        scalarSum1 += arr1[i];
    }
    
    cout << "Enter elements for array 2: ";
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
        scalarSum2 += arr2[i];
    }
    
    cout << "Scalar Sum of array 1: " << scalarSum1 << endl;
    cout << "Scalar Sum of array 2: " << scalarSum2 << endl;
    
    for (int i = 0; i < size; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
    cout << "Vector Sum: ";
    for (int i = 0; i < size; i++) {
        cout << arr3[i] << " ";
    }
    
    for (int i = 0; i < size; i++) {
        arr3[i] = arr1[i] * arr2[i];
        scalarProduct += arr3[i];
    }
    cout << "\nVector Product: ";
    for (int i = 0; i < size; i++) {
        cout << arr3[i] << " ";
    }
    cout << "\nScalar Product: " << scalarProduct << endl;
    
    return 0;
}


