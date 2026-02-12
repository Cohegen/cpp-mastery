/*
Variables of the types float and double are employed either when
a fractional component is required or when our application requires
very large or small numbers.
The difference between a float and a double variable is the magnitude of the largest and smallest
number that each can hold.
Typically double can store a number approximately ten times
larger than a float.
Double is most frequently used since many math functions in the C++
function library use double values.
The function sqrt() function returns a double value that is the square root
of its double argument.
*/

/*
This program uses the Pythagorean theorem to find
the length of the hypotenuse given
the length of the two opposing sides.
*/

#include <iostream>
#include <cmath> // <math> header is needed for sqrt() function
using namespace std;

int main()
{
    double x,y,z;

    x= 5.0;
    y = 4.0;

    z = sqrt(x*x + y*y);

    cout << "Hypotenuse is " << z;

    return 0;
}


