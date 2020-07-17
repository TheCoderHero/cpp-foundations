#include <iostream>
using namespace std;

//Function Prototypes
void getSize(int &size);
void getList(int list[], int size);
void displayMultiples(int list[], int size);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int listSize = 0;
   int list[20];
   getSize(listSize);
   getList(list, listSize);
   displayMultiples(list, listSize);
   return 0;
}


/**********************************************************************
 * Function: getSize
 * Purpose: Prompts user for the size of the list
 ***********************************************************************/
void getSize(int &size)
{
   cout << "Enter the size of the list: ";
   cin >> size;
}


/**********************************************************************
 * Function: getList
 * Purpose: Prompts user for values to insert into the list
 ***********************************************************************/
void getList(int list[], int size)
{
   for (int x = 0; x < size; x++)
   {
      cout << "Enter number for index " << x << ": ";
      cin >> list[x];
   }
}


/**********************************************************************
 * Function: displayMultiples
 * Purpose: Loops through the list and displays values that are evenly
 *          divisible by 3
 ***********************************************************************/
void displayMultiples(int list[], int size)
{
   cout << endl;
   cout << "The following are divisible by 3:\n";
   for (int x = 0; x < size; x++)
   {
      if (list[x] % 3 == 0)
         cout << list[x] << endl;
   }
}
