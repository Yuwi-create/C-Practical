#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear = 2025;
    int age ;
    string name;
    cout<<"Enter your name:";
    getline (cin,name);

       cout<<"Enter your birth year:";
       cin>> birthYear;
 
       age = currentYear - birthYear;
    
       cout<<"Student Name:"<<name<<endl;
       cout<<"Student age:"<<age<<endl;
     
    return 0;
}

