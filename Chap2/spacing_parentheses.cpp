/*
An expression in C++ can have tabs and spaces in it
to make it more readable.
Parentheses increases the precedence of operations contained within them,
just like in algebra when doing BODMAS, brackets come first.
*/

#include <iostream>
using namespace std;
int main()
{
    int x,y,temp;
    x= 10;
    y = 24;
    temp = 30;
    int x1 = 10 / y* (127/x);
    int x2 = (y/3) - (34*temp) + 127;
    cout << x1<< x2;


    return 0;
}
