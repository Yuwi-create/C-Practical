#include <iostream>
using namespace std;
  
int main() {
     int base , power , a, b;
     cout << "Enter the Number ";
     cin>> base;
     cout<<" Enter the Power";
     cin >> power;
     b= power;
     a= base;
     while (b>1)
 
     {
         a*=base;
         b--;
     }
     cout << base <<"to the power of"<< power<<"is="<<a;
     return 0;
}
    