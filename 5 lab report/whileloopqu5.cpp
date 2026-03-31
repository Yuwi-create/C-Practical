#include <iostream>
using namespace std;

      int main(){
          int num, a=1, b;
          cout << "Enter the number";
          cin >> num;
          b= num;
          while (b>0)
          {
           a*=b;
           b--;
          }
          cout <<"Factorial of the"<< num<<"is = " << a;
          return 0;
}      