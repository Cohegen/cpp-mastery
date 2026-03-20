/*
Since C++ is designed to allow full access to the computer's hardware,
it gives us the ability to operate directly upon the bits within a byte or word.

C++ contains the bitwise operators.
Bitwise operations refer to the testing,setting or shifting of the actual bits in a byte
or word, which corresponds to C++'s character and integer types.
Bitwise operations cannot be used on bool,float,double, long double,void or other
more complex data types.

*/

#include <iostream>
using namespace std;

int main()
{
    int a=5,b=3;
    cout << (a &b);
}
