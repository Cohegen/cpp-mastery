/*
XOR is a binary operation that yields true
when one and only one is true.
The truth table is shown below:
// XOR Truth Table
// A   B   A ^ B
// 0   0    0
// 0   1    1
// 1   0    1
// 1   1    0
//
// XOR outputs 1 only when the inputs are different.
// XOR outputs 0 when the inputs are the same.

*/
// Creating an XOR using the C++ logical operators

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool p,q;

    p = true;
    q =true;

    cout << p << " XOR " << q << " is " << ((p || q) && !(p&&q)) << "\n";
    p = false;
    q = true;

    cout << p << " XOR " << q <<  "is " << ((p || q) && !(p&&q) ) << "\n";

    p=true;
    q = false;

    cout << p << " XOR " << q << " is " << ((p|| q) && !(p&&q)) << "\n";

    p = false;
    q = false;

    cout << p << " XOR " << q << " is " << ((p || q) && !(p&&q)) << "\n";

    return 0;

}
