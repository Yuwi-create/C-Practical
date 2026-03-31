#include <iostream>
using namespace std;

int main() {
    string array[10];
    cout <<"Enter 10 string:"<<endl;
      for(int i=0; i<10; i++){
          cout<< "Enter string"<<i+1 <<":";
             getline(cin, array[i]);
      }
    cout<<"\nArray elements in normal order:"<<endl;
    for (int i =0; i< 10; i++){
          cout << array[i] << endl;
    }
    cout <<"\nArray elements in reverse order:"<<endl;
    for  (int i =9; i>=0; i--){
            cout << array[i] << endl;
    }
}
 