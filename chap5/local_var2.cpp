/*
A local variable can be declared anywhere, within any block of code.
A variable declared within a block is local to that block.
This means that the variable does not exist until the block is entered and is
destroyed when the block is exited.
Furthermore, no code outside that block,including other code in the function can access that
variable.
*/

//variables can be local to a block.

#include <iostream>
using namespace std;

int main()
{
    int x = 19; // x is known to all code

    if (x==19)
    {
        int y = 20; // y is local to the if block

        cout << "x + y is " << x + y << "\n";
    }
    // y = 100; //error, because y is not known here
}

/*
Since variable x is declared at the start of the main()'s scope and is
acessible to all subsequent code within main.
However within main() there's a if statement block in which y is declared so
this means that y is visible only to the code within its block.
So if we uncomment y = 100 we would get a compile-time error, since y is not visible
outside the block it was declared in.
*/
