/*
There are two basic types of scopes they include:
1.local scope
2. global scope.

A local scope is created by a block.
Thus, each time you start a new block, we are are creating a new scope.
A variable declared within a block is called a local variable.
A local variable can be used only by statements located within the block in which
it is declared.
Thus, statements defined outside a block cannot access an object defined in it.
Local variables exist only while the block of code in which they are declared is executing.
A local variable is created when its declaration statement is encountered within its blocks, and destroyed when
the block is left.
A function's code and data are private to that function and cannot be accessed by any statement in any other
function except through a call to that function.
*/
#include <iostream>
using namespace std;

void fl();

int main()
{
    int val =10;

    cout << "val in main(): " << val << "\n";
    fl();
    cout << "val in main(): " << val<< "\n";

    return 0;
}
void fl()
{
    int val = 88;

    cout << "val in f1(): " << val << "\n";
}
