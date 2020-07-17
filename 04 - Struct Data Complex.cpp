#include <iostream>
using namespace std;

/**********************************************************************
 * Structure: Complex
 * Purpose: Initialized 2 double variables
 ***********************************************************************/
struct Complex
{
   double realNumber;
   double imaginaryNumber;
};

/**********************************************************************
 * Function: prompt
 * Purpose: Prompts user for the intialization information
 ***********************************************************************/
void prompt(Complex &input)
{
   cout << "Real: ";
   cin >> input.realNumber;
   cout << "Imaginary: ";
   cin >> input.imaginaryNumber;
}

/**********************************************************************
 * Function: display
 * Purpose: Displays the real and imaginary numbers
 ***********************************************************************/
void display(Complex &output)
{
   cout << output.realNumber << " + " << output.imaginaryNumber << "i\n";
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex &x, const Complex &y)
{
   Complex total =
   {
      x.realNumber + y.realNumber,
      x.imaginaryNumber + y.imaginaryNumber
   };
   return total;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1;
   Complex c2;
   
   // Call your prompt function twice to fill in c1, and c2 
   prompt(c1);
   prompt(c2);
   
   // Declare another Complex for the sum
   Complex sum;

   // Call the addComplex function, putting the result in sum;
   sum = addComplex(c1, c2);
   cout << "\nThe sum is: ";
   display(sum);
   return 0;
}
