/*
Call-by-reference has certain problems
1.It compels us to perform all operations through pointers.
2. It requires that we remember to pass the address rather than the values of
the arguments when calling the function.
To solve this problem we can use the reference parameter.
When we use the reference parameter, the address (not the value) of an argument
is automatically passed to the function.
Within the function, operations on the reference parameter are automatically dereferenced, so
there is no need to use the pointer operators.

A reference parameter is declared by preceding the parameter name in the function's declaration
with an &.

*/

//using a reference parameter

#include <iostream>
using namespace std;

void f(int &i); //here i is a reference parameter

int main()
{
    int val = 1;

    cout << "Old value for val: " << val << "\n";
    f(val); //pass address of val to f()
    cout << "New value for val: " << val << "\n";
    return 0;
}

void f(int &i)
{
    i=10; // this modifies calling arguments
}

/*
Notice the declaration of i. It is preceded by an & which causes it to become a reference parameter.
Inside the function the following statement
i=10;
does not cause i to be given the value 10.
Instead, it causes the variables referenced by i in this case val to be
assigned the value 10.
Since we do not the *pointer operator and instead use the & address operator,the C++
compiler automatically knows that it is an address and dereferences it for us.
*/
