/*
This programs illustrates the difference
between int and double
*/
#include <iostream>
using namespace std;

int main ()
{

    int ivar; // declaration of an int variable
    double dvar; // declaration of a floating-point variable

    ivar = 100; //assigning 100 to variable 100

    dvar= 100.0; // assign dvar the value 100.0

    cout << "Original value of ivar" << ivar << "\n";
    cout << "Original value of dvar" << dvar << "\n";

    cout << "\n"; //prints blank line

    //dividing both dvar and ivar by 3
    ivar = ivar / 3;
    dvar = dvar / 3.0;

    cout << "ivar after division: " << ivar << "\n";
    cout << "dvat after division: " << dvar << "\n";

    return 0;

}
