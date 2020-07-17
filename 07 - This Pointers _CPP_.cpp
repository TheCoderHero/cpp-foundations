#include "date.h"
#include <iostream>

void Date :: set(Date *pDate, int &day, int &month, int &year)
{
   this->day = day;
   this->month = month;
   this->year = year;
}

void Date :: displayAmerican(Date *pDate)
{
   std::cout << this->month << "/" << this->day << "/" << this->year << std::endl;
}

void Date :: displayEuropean(Date *pDate)
{
   std::cout << this->day << "/" << this->month << "/" << this->year << std::endl;
}

void Date :: displayISO(Date *pDate)
{
   std::cout << this->year << "-" << this->month << "-" << this->day << std::endl;
}
