using namespace std;
int main() {

int num, reversedNum = 0, remainder;
   cout << "Enter the Number: ";
   cin >> num;

   if (num < 0)
   {
       cout << "Invalid Input!" << endl
       return 0;
   }

   while (num != 0)
  {
       remainder num % 10;
       reversedNum reversedNum 10+ remainder;
       num / 10;
  }
  cout << "Reversed Number: " << reversedNum << endl;
  return 0;

}