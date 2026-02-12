/*
Cast forces an expression to be of a specific type
C++ defines five types of casts.
Four allow detailer and sophisticated control
over casting.
The general form of cast is:
(type) expression
where type is the target type into which you want
to convert the expression.
For example if you wish to make sure the expression
x/2 is evaluated to type float, we write:
(float) x/2

*/
//program to demonstrate cast
#include <iostream>
using namespace std;

int main()
{
    int i;

    for(i=1;i<=10;++i)
        cout << i << "/ 2 is: " << (float) i / 2 << '\n';
    return 0;
}
