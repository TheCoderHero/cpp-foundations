#include "product.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Product::prompt()
{
   cout << "Enter name: ";
   getline(cin, this->name);
   cout << "Enter description: ";
   getline(cin, this->description);
   cout << "Enter weight: ";
   cin >> this->weight;
      do
      {
         cout << "Enter price: ";
         cin >> this->basePrice;
         if (cin.fail())
         {
            cin.clear();
            cin.ignore(256, '\n');
            this->basePrice = -1;
         }
      }while (this->basePrice < 0);
}

float Product::getSalesTax()
{
   return ((this->basePrice / 100) * 6);
}

float Product::getShippingCost()
{
   float sCost;
   if (this->weight < 5.0)
      return 2;
   else
   {
      sCost = (this->weight - 5);
      sCost *= 0.10;
      sCost += 2.00;
   }
   return sCost;
}

float Product::getTotalPrice()
{
   float total = this->basePrice + this->getSalesTax()
               + this->getShippingCost();
   return total;
}

void Product::displayProfile()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << this->name << " - $" << this->basePrice << "\n"
        << "(" << this->description << ")\n";

}

void Product::displayLineItem()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "$" << this->basePrice << " - " << this->name << " - ";
   cout.precision(1);
   cout << this->weight << " lbs\n";
}

void Product::displayReceipt()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << this->name << endl;
   cout << "  Price:         $" << setw(8) << this->basePrice         << "\n"
        << "  Sales tax:     $" << setw(8) << this->getSalesTax()     << "\n"
        << "  Shipping cost: $" << setw(8) << this->getShippingCost() << "\n"
        << "  Total:         $" << setw(8) << this->getTotalPrice()   << "\n";
}
