/*
It is important to ensure that pointer variables always point to the
correct type of data.
For example, when you declare a pointer to be of type int, the compiler
assumes that anything it points to will be an integer variable.
If it doesn't point to an integer variable, then trouble is
usually not far behind.
For example:
int *ptr;
double f; //
p = &f

This fragment is invalid because you cannot assign a double pointer to
an integer.
That is, &f generates a pointer to a double, but p is pointer to an int.
These two types are not compatible. In fact, the compiler would flag an error
at this point and not compile our program.

The cast to int * causes the double pointer to be converted to an integer pointer.
However, to use a cast for this purpose is questionable practice.
*/
//This program won't work right
#include <iostream>
using  namespace std;

int main()
{
    double x,y;
    int *p;

    x = 123.33;
    p=(int *) &x; // use cast to double * to int *

    y = *p;
    cout << y;
}
