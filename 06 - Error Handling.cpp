#include <iostream>
using namespace std;

void prompt(int &test);

int main()
{
   int userNumber;
   prompt(userNumber);
   cout << "The number is " << userNumber << ".\n";
   return 0;
}

/******************************************************************************
 * PROMPT
 * Input:
 *    test     A referenced integer to run a conditional test on
 * Output:
 *    none
 *****************************************************************************/
void prompt(int &test)
{
   bool valid;
   do
   {
      valid = true;
      cout << "Enter a number: ";
      cin >> test;
      if(cin.fail())
      {
         cin.clear();
         cin.ignore(256, '\n');
         cout << "Invalid input.\n";
         valid = false;
      }
   }while(!(valid));
}
