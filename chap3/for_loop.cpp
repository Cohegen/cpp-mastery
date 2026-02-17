/*
The general form of the for loop
for repeating a single statement is
for (initialization;expression;increment) statement;

For repeating a block the general form is
for (initialization;expression;increment)
{
  statement sequence
}
The initialization is usually an assignment statement
that sets the initial value of the loop control
variable,which acts as the counter that controls the loop.
The expression is a conditional expression that determines
whether the loop will repeat.
The increment defines the amount by which the loop control
variable will change each time the loop is repeated.
*/
/*
A program that uses for loop to print the square root of the
numbers between 1 and 99.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    double sq_root;

    for(num=1;num< 100;num++)
    {
        sq_root = sqrt((double) num);
        cout << num << " " << sq_root << '\n';
    }
}
