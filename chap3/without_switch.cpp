/*
When the break statement is encountered within the
statement sequence of a case,the break statement
causes program flow to exit from the entire switch
statement and resume at the next statement outside the
switch.
However, if a break statement does not end the statement
sequence associated with case, the all statements at and below
matching case will be executed until a break is encountered.
*/

// A switch without break statement

#include <iostream>
using namespace std;

int main()
{
    int i;

    for(i=0;i<5;i++)
    {
        switch(i)
        {
            case 0: cout << "less than 1\n";
            case 1: cout << "less than 2\n";
            case 2: cout << "less than 3\n";
            case 3: cout << "less than 4\n";
            case 4: cout << "less than 5\n";
        }
        cout << '\n';
    }
    return 0;
}
