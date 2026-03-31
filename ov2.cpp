#include <iostream>
using namespace std;

void print_info(string name) {
    cout << "Name: " << name << endl;
}

void print_info(string name, int age) {
    cout << "Name: " << name << ", Age: " << age << endl;
}


void print_info(string name, int age, string city) {
    cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
}

int main() {
    
    print_info("Alice");  
    print_info("Bob", 25);  
    print_info("Charlie", 30, "New York");  

    return 0;
}
