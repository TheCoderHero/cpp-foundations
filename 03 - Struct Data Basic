#include <iostream>
using namespace std;

/***********************************************************************
 * STUDENT STRUCTURE
 * This structure creates the data type of "Student" which contains a
 * firstName, lastName, and studentID variable.
 **********************************************************************/
struct Student
{
   string firstName;
   string lastName;
   int studentID;
};

/**********************************************************************
 * GET INFO
 * Input:
 *      input:          A referenced Student object
 * Output:
 *      none            The getInfo() function prompts the user for their
 *                      information needed to initialize the Student
 *                      object.
 ***********************************************************************/
void getInfo(Student &input)
{
   cout << "Please enter your first name: ";
   getline(cin, input.firstName);
   cout << "Please enter your last name: ";
   getline(cin, input.lastName);
   cout << "Please enter your id number: ";
   cin >> input.studentID;
   cout << endl;
}

/**********************************************************************
 * DISPLAY INFO
 * Input:
 *      output          A referenced Student object
 * Output
 *      none            The displayInfo() function prints out the stored
 *                      initialized information for the object.
 ***********************************************************************/
void displayInfo(Student &output)
{
   cout << "Your information:\n"
        << output.studentID << " - " << output.firstName << " "
        << output.lastName << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Student user;
   getInfo(user);
   displayInfo(user);
   return 0;
}
