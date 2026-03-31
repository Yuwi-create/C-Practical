#include <iostream>
using namespace std;

   void diplay( float no1,float  no2, float no3){
        
        float smallest =no1;
          if (no2< smallest ){
            smallest = no2;
          }
          if (no3< smallest ){
            smallest = no3;
          }

        cout<<"The smallest number is:"<<smallest<<endl;
  }

  int main (){
  
      float a = 5.9 , b= 3.2, c= 6.8;
      diplay (a,b,c);

}
