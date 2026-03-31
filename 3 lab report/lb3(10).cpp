#include <iostream>
using namespace std;

int main() {
  string name;
  cout<<"Enter your name:";
  getline(cin,name);
 
  double basic,newSalary,increment;
  cout<<"Enter your basic salary:";
  cin>>basic;

      if(basic<5000){
           increment = basic*0.05;
      }
      else if (basic >= 5000 && basic < 10000){
            increment = basic*0.10;
      }
      else{
             increment = basic*0.15;
      }

      newSalary = basic+ increment;

       cout<<"Employee name:"<<name<<endl;
       cout<< "New Salary:"<<newSalary<<endl;
   
    return 0;
}




