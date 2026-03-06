/*
When we pass numeric data as a command-line argument to a program, the data will
be received in string form.
The program will need to convert it into binary, internal format using one of the
standard library functions supported by C++.
C++ has three functions that do this:
atof - converts a string to a double and returns the result
atol() - converts a string to long int and returns the result
atoi() - converts a string to an int return the result.

*/

/*
A program that demonstrates the conversion of a numeric command-line argument
into its binary equivalent.
It computes the sum of the two numbers that follow its name on the command line.
This program uses the atof() function that converts its numeric argument
into its internal representation.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char *argv[])
{
    double a,b;

    if(argc!=3)
    {
        cout << "Usage: add num num\n";
        return 1;
    }

    a = atof(argv[1]);//converts first command-line arg
    b = atof(argv[2]); //convert second command-line arg

    cout << a + b;

    return 0;
}
