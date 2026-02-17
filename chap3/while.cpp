/*
The general form of the while loop is while(expression) statement;
where statement may be a single statement or a block of statements.
The expression defines the condition that controls the loop, and it
can be any valid expression.
The statement is performed while the condition is true.
When the condition is false,the program control passes
to the line immediately following the loop.

*/
/*
A program that displays all printable characters,
including the extended character set,it one exists.
*/
#include <iostream>
using namespace std;

int main()
{
    unsigned char ch;
    ch = 32;
    while(ch)
    {
        cout <<ch;
        ch++;
    }
    return 0;
}
