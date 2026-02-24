/*
Whenever compilers encounter a string constant, it stores
it in the program's string tables and generates a pointer to the
string.
In the fragment below "Olga" yields a pointer to its entry in the
table.
Therefore the following program is perfectly valid and prints the phrase
Pointer add power to C++
*/
#include <iostream>
using namespace std;

int main()
{
    char *ptr;

    ptr = "Pointers add power to C++.\n";//ptr assigned the address of this string constant

    cout << ptr;

    return 0;
}
