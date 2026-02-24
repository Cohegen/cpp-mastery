


/*
A program that performs reverse case using pointer
arithmetic as a way of array indexing
*/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char *p;
    int i;

    char str[80] = "This Is A Test";

    cout << "Original string: " << str << "\n";

    p = str; //assigns p the address of the start of the array

    //now index p
    for (i=0;p[i];i++)
    {
        if(isupper(p[i]))
            p[i] = tolower(p[i]);
        else if (islower(p[i]))
            p[i] = toupper(p[i]);
    }
    cout << "Inverted-case string: " << str;

    return 0;
}
/*
The program below creates a char pointer called p and then assigns to that
pointer the address of the first element in str.
Inside the for loop, p is indexed using the normal array indexing syntax.
This is valid in C++ because, the statement p[i] is functionally identical to
* (p+i).
*/
