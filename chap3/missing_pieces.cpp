/*
Another aspect of the for loop that is different in C++
than in many computer languages is that pieces of the
loop definition need not be there.
For example if we want to write a loop that runs
until the number 123 is typed in at the keyboard
the program looks like this below
*/

// a for loop with no increment
#include <Iostream>
using namespace std;

int main()
{
    int x;

    for(x=0; x != 123;)
    {
        cout << "Enter a number: ";
        cin >>x;
    }
    return 0;
}
