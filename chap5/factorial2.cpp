/*
This program prints a string backward using recursion
*/

#include <iostream>
using namespace std;

void reverse(char *s);

int main()
{
    char str[] = "this is a test";

    reverse(str);

    return 0;
}

// print string backwards
void reverse(char *s)
{
    if (*s)
        reverse(s + 1);
    else
        return;

    cout << *s;
}
