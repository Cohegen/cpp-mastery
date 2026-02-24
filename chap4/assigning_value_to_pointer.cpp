/*
We can use a pointer on the left-hand side of an assignment statement
to assign a value to the location pointed by the pointer.
Assuming that p is an int pointer, this assigns the value 101 to the location pointed
to by p.
*p = 101;
We can verbalize it as saying at location pointed by p, assign the value 101.
To increment or decrement the value at the location pointed to by a pointer,
we can use a statement like this:
(*p)++;
The parentheses are necessary because * operator has lower precendence than does the ++
operator.
*/

/*
A program to demonstrate assignment through a pointer
*/
#include <iostream>
using namespace std;

int main()
{
    int *p , num;

    p = &num;

    *p = 100; //assigning num the value 100 through p
    cout << num << ' ';
    (*p)++;// increment num through p
    cout << num << ' ';
    (*p)--; //decrement num through p
    cout << num << '\n';

    return 0;

}
