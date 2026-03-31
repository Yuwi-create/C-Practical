#include <iostream>
using namespace std;

int main() {
    int i = 1,pr,tot=0, avg =0; 
    while(true)
 {
       cout <<"Enter the price of the item -";
       cin>> pr;
       if(pr==000)
       {
         break;
       }
       if(pr<200)
       {
             cout<<"Invalid Input!"<< endl;
             continue;
       }
       tot+=pr;
       avg=tot/i;
       i++;
 }
 cout<<"Avarage Price of an Item="<< avg << endl;
 return 0;
}