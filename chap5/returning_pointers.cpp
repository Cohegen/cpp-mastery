/*
Pointers are returned like any other data type and pose no special
problem.

To return a pointer, a function must declare its return type to be a pointer.
For example, here the return type of f() is declared to be an int pointer:
int *f();

If a function's return type is a pointer, then the value used in its return statement
must also be a pointer.
*/

/*
The program bellow demonstrates that use of a pointer return type.
The function get_substr() searches a string for a substring.
It returns a pointer to the first matching substring.
If no match is found, a null pointer is returns
*/

#include <iostream>
using namespace std;

char *get_substr(char *sub,char *str);

int main()
{
    char *substr;

    substr = get_substr("three","one two three four");

    cout << "substring found: " << substr;

    return 0;
}

//Return pointer to substring or null if not found.
char *get_substr(char *sub,char *str)
{
    int t;
    char *p, *p2, *start;

    for(t=0;str[t];t++)
    {
        p = &str[t]; //reset pointers
        start = p;
        p2 = sub;
        while(*p2 && *p2==*p)
        {
            //check for substring
            p++;
            p2++;
        }
        /* If at end of p2 (i.e substring), then a match has been found. */
        if(!*p2)
            return start; //return pointer to beginning of substring
    }
    return 0; // no match found
}
