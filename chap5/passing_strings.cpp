/*
Because a string is simply a character array that is null-terminated,
when we pass a string to a function only a pointer to the beginning of
the string is actually passed.
This is a pointer type char*.

*/

/*
A program that has a function strInvertCase() which inverts
the case of the letters within a string

*/
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void strInvertCase(char *str);

int main()
{
    char str[80];

    strcpy(str, "This Is A Test");

    strInvertCase(str);

    cout << str; //display modified string

    return 0;
}

//inverting the case of the letters within a string
void strInvertCase(char *str)
{
    while(*str)
    {
        //invert case
        if (isupper(*str)) *str = tolower(*str);
        else if(islower(*str)) *str = toupper(*str);

        str++; //move on the next char
    }
}
