#include <iostream>
#include <string>
using namespace std;

#include "product.h"

int main()
{
   //Local Variables
   int choice;
   Product item;

   //Product information
   item.prompt();

   cout << endl;
   cout << "Choose from the following options:\n";
   cout << "1 - Advertising profile\n";
   cout << "2 - Inventory line item\n";
   cout << "3 - Receipt\n";
   cout << endl;
   cout << "Enter the option that you would like displayed: ";
   cin >> choice;

   cout << endl;

   if (choice == 1)
      item.displayProfile();
   else if (choice == 2)
      item.displayLineItem();
   else
      item.displayReceipt();

   return 0;
}
