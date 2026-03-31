#include <iostream>
using namespace std;

int main() {
    int i=1,a,b,sum,pro,amod,bmod;
    cout<< "Enter the frist number-";
    cin>> a;
    cout<< "Enter the second number-";
    cin>> b;
    do{
    
      switch(i)
      {
      case 1:
        sum = a+b;
        cout <<"Sum of the numbers="<< sum << endl;
        i++;
      break;

      case 2:
        pro = a*b;
        cout <<"Product of the numbers="<< pro << endl;
        i++;
      break;
      
      case 3:
        amod = a%2;
        bmod = b%2;
        if(amod==1)
        {
           cout<< a<< "is an Odd Number"<< endl;
        }
        else
        {
           cout<< a<< "is an Even Number"<<endl;
        } 
        if(bmod==1)
        {
           cout<< b<< "is an Odd Number"<< endl;
        }
        else
        {
           cout<< b<< "is an Even Number"<<endl;
        } 
        i++;
      break;
      }
    }while(i!=4);
}
    


