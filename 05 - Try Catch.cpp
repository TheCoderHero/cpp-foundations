#include <iostream>
using namespace std;

void prompt(int &test) throw (string);

int main()
{
   int userNumber;
   try
   {
      prompt(userNumber);
      cout << "The number is " << userNumber << endl;
   }
   catch(string error)
   {
      cout << "Error: " << error << endl;
   }
   return 0;
}

void prompt(int &test) throw (string)
{
   cout << "Enter a number: ";
   cin >> test;
   if(test < 0)
      throw string("The number cannot be negative.\n");
   if(test > 100)
      throw string("The number cannot be greater than 100.\n");
   if(test % 2 != 0)
      throw string("The number cannot be odd.\n");
}
