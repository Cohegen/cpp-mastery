/*
This program reverses the contents of a string in place.
Thus instead of copying the string back-to-front into another array.
it reverses the contents of the string inside the array that holds it.
This program uses two pointer variables to accomplish this.
One pointer points to the beginning of a string and the other
points to the last character in the string.
Each time through the loop, the characters pointed to by the
pointers are swapped and the pointers are advanced.
When the start pointer is greater than or equal to the end pointer,
the string is reversed.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "this is a test"; // fixed semicolon
    char *start, *end;
    int len;
    char t;

    // displaying the original array
    cout << "Original: " << str << "\n";

    // getting the length of the string
    len = strlen(str);

    // setting initial pointers
    start = str;
    end = &str[len - 1];

    // reversing the string
    while (start < end)
    {
        // swap characters
        t = *start;
        *start = *end;
        *end = t;

        // move pointers
        start++;
        end--;
    }

    // display reversed string
    cout << "Reversed: " << str << "\n";

    return 0;
}
