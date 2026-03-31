#include <iostream>
using namespace std;

int main() {
   int distance,time;
      cout<<"Distance(meters):";
      cin>>distance;
     
      cout<<"Time (second):";
      cin>>time;

   int speed= distance/time;
      cout<<"Average speed:"<<speed<<" m/s";
 
   return 0;
}
    