/*
There are two ways that a computer language can pass an argument to a subroutine.
The first is call-by-value.
This method copies the value of an argument into the parameter of the subroutine.

The second way is to Call-by-reference.
In this method, the address of an argument (not its value) is copied into the parameter.
Inside the subroutine, this address is used to access the actual argument specified in the call.

*/

//changing a call-by-value parameter does not affect
// argument.
#include <iostream>
using namespace std;

double reciprocal (double x);

int main()
{
    double t = 10.0;

    cout << "Reciprocal of 10.0 is " <<reciprocal(t) << "\n";

    cout << "Value of t is still: " << t << "\n";

    return 0;
}

//Return the reciprocal of a value
double reciprocal(double x)
{
    x = 1 / x; //create reciprocal

    return x;
}
