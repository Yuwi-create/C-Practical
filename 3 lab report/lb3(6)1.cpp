#include <iostream>
using namespace std;

int main() {
   float averagespeed,distance,time;
      cout<<"Distance(meters):";
      cin>>distance;
     
      cout<<"Time (second):";
      cin>>time;

      averagespeed= distance/time;
      cout<<"Average speed:"<<averagespeed<<" m/s";
 
   return 0;
}
    