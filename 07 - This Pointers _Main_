#include "date.h"
#include <iostream>

int main()
{
   int day;
   int month;
   int year;
   std::cout << "Month: ";
   std::cin >> month;
   std::cout << "Day: ";
   std::cin >> day;
   std::cout << "Year: ";
   std::cin >> year;
   std::cout << "\n";

   Date date;
   date.set(&date, day, month, year);
   date.displayAmerican(&date);
   date.displayEuropean(&date);
   date.displayISO(&date);

   return 0;
}
