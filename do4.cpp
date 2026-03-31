#include <iostream>
using namespace std;

int main() {
    int i=1,a,rad,len,wid,hig,ac,as,ar;
    cout << "Choose your shape to get the area of it "<<endl;
    cout << "1.Press 1 for Circle"<< endl;
    cout << "2.Press 2 for Square"<< endl;
    cout << "3.Press 3 for Rectangle"<< endl;
    cin >> a;
    do{
        switch(a)
        {
            case 1:
              cout<<"Enter the radius of the circle(cm) = ";
              cin>> rad;
              ac = 22*rad*rad/7;
              cout <<"Area of the circle=" << ac<< "sq cm";
              i++;
              break;

              case 2:
                cout<<"Enter the length of the side(cm) = ";
                cin>> len;
                as = len*len;
                cout <<"Area of the square=" << as<< "sq cm";
                i++;
                break;
  
              case 3:
                cout<<"Enter the width(cm) = ";
                cin>> wid;
                cout<<"Enter the hight(cm) = ";
                cin>> hig;
                ar = wid*hig;
                cout <<"Area of the rectangle=" << ar<< "sq cm";
                i++;
                break;
        }
    }while (i<2);
}