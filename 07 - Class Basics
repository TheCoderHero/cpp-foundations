#include <iostream>
using namespace std;

/******************************************************************************
 * BOOK:    The definition of a book - title and author
 *****************************************************************************/
class Book
{
private:
   string title;
   string author;
public:
   void prompt()
   {
      cout << "Title: ";
      getline(cin, title);
      cout << "Author: ";
      getline(cin, author);
   }
   void display()
   {
      cout << "\"" << title << "\" by " << author << endl;
   }
};

/******************************************************************************
 * MAIN:    A simple driver program for our Book class
 *****************************************************************************/
int main()
{
   Book book;
   book.prompt();
   book.display();
   return 0;
}
