/*
C++ supports a wide range of string manipulation functions.
They are:
    Strcpy: it general form is strcpy(to,from). It copies contents of the
             string from into to.
    Strcat: it takes the from strcat(s1,s2). The strcat() function appends s2 to the
             end of s1;s2 is unchaged. And we should ensure that s1 is large enough
            to hold its orginal contants and those of s2.

    strcmp:it's general form is strcmp(s1,s2).This functions compares two strings and returns
            0 if they are equal. If s1 is greaterthan s2 lexicograhicallu, then a
            positive number is returned, if it is less than s2 , negative number is returned.

    strlen: it's general form of a call to strlen() is strlen(s).where s is string.
            The strlen() function returns the length of the string pointed to by s.


*/
//Demonstrate the string function
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s1[80],s2[80];
    strcpy(s1,"C++");
    strcpy(s2," is power programming");
    cout << "lengths: " << strlen(s1);
    cout << ' ' << strlen(s2) << '\n';
    if (!strcmp(s1,s2))
        cout << "The string are equal\n";
    else cout << "not equal\n";
          strcat(s1,s2);

    cout<< s1 << '\n';
    strcpy(s2,s1);
    cout << s1 << " and " << s2 << "\n";
    if(!strcmp(s1,s2))
        cout << "s1 and s2 are now the same.\n";
    return 0;

}
