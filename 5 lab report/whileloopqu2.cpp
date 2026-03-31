#include <iostream>
using namespace std;
   int main (){
       double price, sum =0;
       int count =0, i=0;
     
       while (i< 10){
           cout <<"Enter price of iteam"<< (i+1)<<":";
           cin >> price;
 
           sum+=price;
           if (price >200){
                    count++;
           }
           i++;
   }
   cout <<"Average price:"<< sum/10 <<endl;
   cout<< "Number of iteam with price >200:" << count<< endl;
   return 0;
}
