/*
The bool type stores Boolean that is either True or False values.
One fundamental concepts in C++ is that any nonzero vale is interpreted as true and zero
as false.
So C++ automatically converts any nonzero value into true and automatically
converts zero to False.
It also does the reverse as it converts 1 to true and 0 to false.
*/

//program that demonstrates bool values

#include <iostream>
using namespace std;

int main()
{
    bool b;

    b = false;
    cout << "b is " << b << "\n";

    b= true;
    cout << " b is " << b << "\n";

    // a bool value can control the if statement
    if(b) cout << " This is executed.\n";

    b = false;
    if(b) cout << "This is not executed.\n";

    //outcome of a relational operator is true/false  value
    cout << "10 > 9 is "  << (10<9) << "\n";

    return 0;
}
