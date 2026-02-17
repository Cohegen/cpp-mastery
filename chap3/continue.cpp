/*
It is possible to force an early iteration of a loop
bypassing the loop's normal control structure.
This is accomplished using continue.
The continue statement forces the next iteration
of the loop to take place,skipping any code
between itself and the conditional expression that
controls the loop.
*/
#include <iostream>
using namespace std;

int main()
{
    int x;

    for(x=0;x<=100;x++)
    {
        if(x%2 ==0) continue;
        cout << x << ' ';
    }
    return 0;
}
