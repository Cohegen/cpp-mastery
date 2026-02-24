/*
A pointer to a pointer is a form of multiple indirection, or chain of pointers.

*/

#include <iostream>
using namespace std;

int main()
{
    int x, *p, **q;

    x = 10;
    p = &x;
    q = &p;

    cout << *q<<"\n" ;//prints the address of p
    cout << **q; //prints the value of x

}
