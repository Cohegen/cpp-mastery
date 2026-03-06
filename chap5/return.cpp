/*
The return statement has two forms: one that returns a value, and one that does not.
If a function has a void return type that means the function does not
return a value, then it can use this form of return:
    return;

When return is encountered, execution returns immediately to the caller.
Any code remaining in the function is ignored.

*/

//A program that terminates execution of a function after running into return statement
#include <iostream>
using namespace std;

void f();

int main()
{
    cout << "Before call\n";

    f();

    cout << "After call\n";

    return 0;
}

//a void function that uses return
void f()
{
    cout << "Inside f()\n";

    return; //return to caller

    cout << "This won't display.\n";
}
