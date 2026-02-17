/*
It is possible to force an immediate exit from a loop,
bypassing the loop's conditional test, by using the break statement.
When the break statement is encountered inside a loop, the loop
is immediately terminated and the program control resumes at the
next statement following the loop.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;

    //loops from 0 to 9, not to 100
    for(t=0;t<100;t++)
    {
        if(t==10) break;
        cout << t << ' ';
    }
    return 0;
}
