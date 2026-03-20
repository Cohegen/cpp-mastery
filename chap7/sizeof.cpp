/*
Since the sizes of C++'s built-in types can differ between computing environment, knowing the
size of a variable in advance, in all situation is not possible.
To solve this problem, C++ includes the size of compile-time operator which has these general forms:
sizeof(type) sizeof var-name
The first version returns the size of the specified data type, the
second returns the size of the specified variable.
*/

//demonstrate sizeof

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int i;

    cout << sizeof ch << ' ' ; //size of char
    cout << sizeof i << ' '; //size of int
    cout << sizeof(float) << ' '; //size of float
    cout << sizeof(double) << ' '; //size of double

    return 0;
}
