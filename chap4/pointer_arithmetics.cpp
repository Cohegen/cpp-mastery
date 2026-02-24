/*
There are only four operators that can be used on pointers i.e ++,--,+ and -.
To understand what happens in pointer arithmetic, let p1 be an int pointer with
a current value of 2000 i.e it contains the address 2000.
Assuming 32-bit integers, after the expression
p1++;
the contents of p1 will be 2004 not 2001.
This is because for this is that each time p1 is incremented, it points
to the next int.
The same applies to decrements of pointer why by it will point to the previous
int.
So basically, each time a pointer is incremented,it will point to the memory location of
the next element of its base type.
Each time it is decremented, it will point to the location of the previous element of its base type.
The expression

p1 = p1 + 9;

makes p1 point to the ninth element of p1's base type, beyond the one to
which it is currently pointing.

The  program below tries to see the effects of pointer arithmetic.
It creates an int pointer(i) and double pointer (f).
It then adds the values 0 through 9 to these pointers and displays the results.

*/

#include <iostream>
using namespace std;

int main()
{
    int *i, j[10];
    double *f, g[10];
    int x;

    i = j;
    f = g;

    for (x=0;x<10;x++)
        cout << i+x<< ' ' <<f+x << '\n';//displays the addresses produced by adding x to each pointer

    return 0;
}
