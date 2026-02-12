/*
Literals refer to fixed , human-readable values that cannot be
altered by the program.

C++ supports several types of literals:
1.Integer literals: they represent whole numbers without a fractional
or exponential part.
2.Floating-point literals: represent real numbers with a fractional part or an exponent part.
3.Boolean literals:the two built-in keyword true and false are boolen
4.Character literals:represent a single character and are enclosed in single quotes
5.String Literals: represent a sequence of characters enclosed in double quotes.
6.Pointer Literals:nullptr as a literal to specify a zero-initialized pointer value in portable code.
7.User-defined literals: allows programmers to define their own suffixes to create literals of user-defined types.
*/
#include <iostream>
using namespace std;

int main()
{
    wchar_t wc;//defining a wide character which exceeds 8bits
    wc = L'A';

    cout << "one\ttwo\tthree\n";
    cout << "123\b\b45";
    cout << wc;

    return 0;
}
