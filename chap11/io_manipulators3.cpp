/*
The program below uses ws to skip any leading whitespaces when inputting
a string into s:
*/

#include <iostream>
using namespace std;

int main()
{
    char s[80];

    cin >> ws >> s; //use ws
    cout << s;

    return 0;
}
