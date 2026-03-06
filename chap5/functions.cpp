/*
A function is a subroutine that contains one or more C++ statements
and performs a specific tasks.

All C++ functions share a common form,which is:

   return-type name(parameter-list) {//body of function}

The return-type specifies the type of data returned by the function.
If a function does not return a value, its return type must be void.
The name of a function is specified by name
The parameter list is sequence of type and identifier pairs separated by commas.
Parameters are essentially variables that receive the value of the arguments passed to
the function when it is called.
Braces surround the body of the function
*/

//This program contains two functions: main() and myfuc

#include <iostream>
using namespace std;

void myfunc(); // myfunc prototype returns no type

int main()
{
    cout << "In main()\n";

    myfunc(); //call myfunc()

    cout << "Back in main()\n";

    return 0;
}

//the definition of myfunc
void myfunc()
{
    cout << "Inside myfuncs()\n";
}

/*
This programs works by running main() function then running
in the blocks in main() myfunc() function in called which in turn executes
the statement within the myfunc() function.

A function prototype declares the function prior to its definition.
The prototype allows the compiler to know the function's return type as well as the
number and type of any parameters that the function may have.
*/
