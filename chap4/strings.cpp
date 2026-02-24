/*
C++ supports two types of strings.
The first one is the null-terminated string which is a
null-terminated character array.(null is zero)
Thus the null-terminated string contains the characters that
make up the string followed by a null.
Null-terminated strings are widely used because they offer
a high level of efficiency and give the programmer detailed control
over string operations.
The second type of string defined in C++is the string class, which is
part of the C++ class library.

When declaring a character array that will hold a null-terminated string
,we need to declare it one character longer than the largest string it
will hold.
For example if we declare an array str that could hold a 10-character string,
we would write it as follows.

char str [11];
Specifying the size as 11 makes room for the null at the end of the string.
A string constant is a list of characters enclosed in double quotes.
An example is:
"hello there" "I like C++" "Mars"

*/

//using cin to read a string from the keyboard
#include <iostream>
using namespace std;

int main()
{
    char str[80];

    cout << "Enter a string: ";
    cin >> str; // reading the string from keyboard
    cout << "Here is your string: ";
    cout << str;
    return 0;
}
