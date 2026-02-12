/*
When variables of one type are mixed with variables of
another type, a type conversion will occur.
In an assignment statement, the type conversion rule is that
the value of the right side of the assignment is converted to
the type of the left side
*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    char ch;
    float f;
    ch = x;
    x = f;
    f=ch;
    f=x;

    cout << x << "\n" << ch <<"\n" << f << "\n";
    return 0;
}
