/*
A function can return a reference.
In C++ programming, there are several uses for reference return values.

When a function returns a reference,it returns an implicit pointer to its return value.
This gives rise to a rather startling possibility: the function can be used on
the left side of an assignment statement
*/

//Returning a reference

#include <iostream>
using namespace std;

double &f(); //return a reference

double val = 100.0;

int main()
{
    double x;

    cout << f() << '\n'; //display val's value

    x = f(); //assigning value of val to x
    cout << x << '\n'; //display x's value

    f() = 99.1; //changing val's value
    cout << f() << '\n'; //displays val's new value
    return 0;
}

//This function returns a reference to a double
double &f()
{
    return val; // return reference to val -> This returns a reference to the global variable val
}

