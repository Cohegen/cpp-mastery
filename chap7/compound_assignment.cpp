/*
C++ has a special compound-assignment operator that simplifies the coding of a certain type of
assignment statement.
Instead increment x by 10 this way x=x+10 we can write it as x+=10
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout <<"x: " << x  << "\n";

    x+=10;
    cout << "New X: " << x;




    return 0;
}
