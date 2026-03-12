/*
In C++, we can give a parameter a default value that is automatically used when no
argument corresponding to that parameter is specified in a call to a function.

A default argument is specified in a manner syntactically similar to a
variable intialization.
For example
void myfunc(int x=0,int y= 100);
Now myfunc can be called by one of the three methods show here:
myfunc(1,2); //pass explicit values i.e vale 2 to x and 2 to y
myfunc(10); pass x a value, lets y default
*/

#include <iostream>
using namespace std;

void myfunc(int x =0,int y=100);

int main()
{
    myfunc(1,2);
    myfunc(10);

    myfunc();

    return 0;
}

void myfunc(int x, int y)
{
    cout <<"x: " << x <<", y: " << y << "\n";
}
