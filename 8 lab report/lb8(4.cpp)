#include <iostream>
using namespace std;

void greet() {
    string name;
    cout << "Welcome to the system!" << endl;
    cout << "Please enter your name: ";
    getline(cin, name); 
    cout << "Hello, " << name << "! It's nice to meet you." << endl;
}

float calculateIncrement(float salary) {
    float increment;
    if (salary <= 25000) {
        increment = salary * 0.15;  
    }
    else if (salary > 25000 && salary <= 50000) {
        increment = salary * 0.20;   
    }
    else {
        increment = salary * 0.22;  
    }
    return increment;
}

float calculateNewSalary(float basicSalary, float increment) {
    return basicSalary + increment;
}

int main() {
    float basicSalary, increment, newSalary;

    greet();
    cout << "Please enter your basic salary: ";
    cin >> basicSalary;

    increment = calculateIncrement(basicSalary);

    newSalary = calculateNewSalary(basicSalary, increment);

    cout << "Your increment amount is: " << increment << endl;
    cout << "Your new salary is: " << newSalary << endl;

    return 0;
}
