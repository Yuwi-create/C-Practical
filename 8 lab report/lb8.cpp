#include <iostream>
using namespace std;

   void calculate( float no1,float  no2){
        float sum =no1+ no2;
        float difference =no1-no2;
        float multiplication = no1*no2;
   
        cout<<"sum :"<<sum<<endl;
        cout<<"difference :"<<difference<<endl;
        cout<<"multiplication :"<<multiplication<<endl;
 
}

    int main() {
        float no1,no2;

        cout<<"Enter the frist number:";
        cin>>no1;
        cout<<"Enter the second number:";
        cin>>no2;
   
        calculate(no1,no2);
}


 

