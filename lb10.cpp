#include <iostream>
using namespace std;

void greetUser() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Good Morning " << name << "!" << endl;
}

double CalSalary(double basicSalary) {
    return basicSalary + (basicSalary * 0.10);
}

double CalSalary(double basicSalary, double percentage) {
    return basicSalary + (basicSalary * (percentage / 100));
}

int main() {
    greetUser(); // Task 1

    double basic, customIncrement;
    cout << "\nEnter basic salary for 10% increment calculation: ";
    cin >> basic;
    double newSalary1 = CalSalary(basic);
    cout << "New salary with 10% increment: " << newSalary1 << endl;


    cout << "\nEnter basic salary for custom increment: ";
    cin >> basic;
    cout << "Enter increment percentage: ";
    cin >> customIncrement;
    double newSalary2 = CalSalary(basic, customIncrement);
    cout << "New salary with " << customIncrement << "% increment: " << newSalary2 << endl;

    return 0;
}
