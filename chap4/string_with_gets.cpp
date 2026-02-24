//using gets() to read a string from the keyboard

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];

    cout << "Enter string: ";
    gets(str); // read s string using gets()
    cout << "Here is your string: ";
    cout << str;
    return 0;
}
