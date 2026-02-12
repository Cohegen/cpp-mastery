/*
The ++ and -- are the increment and decrement operators
have some special properties.
The increment operator adds 1 to its operand,and decrement operators
subtracts 1.
Therefore:
x=x+1;is the same as x++;
and x = x-1 is the same as --x
Both the increment and decrement operators can either precede (prefix)
or follow (postfix) and the operand.
For example:
x=x+1 can be written as ++x //prefix
or as x++ //postfix
*/

#include <iostream>
using namespace std;

int main()
{

    for(int age=0;age<=100;age++)
    {
        cout << "Incrementing sequence of age:\n"<< age << "\n ";
    }

    for (int count=100;count>=0;count--)
    {
        cout << "Decrementing sequence of count:\n" << count << "\n";
    }


    return 0;
}
