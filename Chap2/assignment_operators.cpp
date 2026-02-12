/*
The assignment operator is the single equal sign, =.
It has this general form:
var = expression;
Here the value of the expression is given to var.
The assignment operator does have one interesting
attribute: it allows us to create a chain of assignments.
for example:
        int x,y,x;
        x=y=z=100; // sets x,y, and z to 100
*/

#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    x=y=z=100; // set x,y, and z to 100
    cout << "x" << x << "\n";
    cout << "y" << y << "\n";
    cout << "z" << z << "\n";
}
