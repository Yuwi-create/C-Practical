#include <iostream>
using namespace std;

int main() {
    int i,a=0,b=0;
    cout <<"Enter the number- ";
    cin >>i;
    do {
      a=i%10;
      i/=10;
      if(a==7)
        {
            b++;
        }

    }
    while (i>0);

cout<<"Number of 7 digits in this number- "<<b;

}
       
