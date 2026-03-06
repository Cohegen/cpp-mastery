/*
When a local variable declared in an inner block has the same as a variable
declared in an outer block, the variable in the inner block hides the one in the
outer block.
*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;

    i=10;
    j=100;

    if(j>0)
    {
        int i; // this i is separated from outer i

        i = j / 2;

        cout << "inner i:" << i << "\n";

    }
    cout << "outer i: " << i << "\n";
    return 0;
}

