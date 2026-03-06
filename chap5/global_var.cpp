/*
A global scope is declarative region that is outside of all functions.
Declaring a variable in the global scope creates a global variable.

Global variables are known throughout the entire program.
They can be any piece of code, and they maintain their values during the entire
execution of the program.
Therefore their scope extends to the entire program.
We can create global variables by declaring them outside of any function.
Since, they are global, they can be accessed by any expression, regardless of which function contains the
expression.
*/

// use a global variable.

#include <iostream>
using namespace std;

void func1();
void func2();

int count; // this is a global variable

int main()
{
    int i; // this is a local variable

    for(i=0;i<10;i++)
    {
        count = i*2;
        func1();
    }

    return 0;
}

void func1()
{
    cout << "count: " << count; //access global count
    cout << "\n"; // output a newline
    func2();
}

void func2()
{
    int count; // this is a local variable

    for(count=0;count<3;count++) cout << ".";
}
