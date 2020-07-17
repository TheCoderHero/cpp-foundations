#include <iostream>
using namespace std;

int main()
{
   string firstName;
   int age;
   cout << "Hello CS 165 World!\n";
   cout << "Please enter your first name: ";
   getline(cin, firstName);
   cout << "Please enter your age: ";
   cin >> age;
   cout << endl;
   cout << "Hello " << firstName << ", you are " << age << " years old.\n";
   return 0;
}
