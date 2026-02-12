/*
C++ provides compound assignment operators that simplify the
coding of certain assignment statements.
Example:
       x = x + 10 can also be written as
       x+=10

       x=x-100;
       can be written as x-=100
both statements assign x the vale x minus 100.
There are compound operators for most of the binary
operators i.e those that require two operands.
var = var op expression;
can be converted into this compound form:
var op = expression
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 200;
    x = x- 100;

    cout << "x: " << x;


    return 0;
}
