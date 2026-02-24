/*
The general form of array initialization is similar
to other variables,it takes the form:
type-specifier array_name[size] = {value-list};
The value-list is a comma separated list of values that are type
compatible with the base type of array.
The following example shows a ten-element integer array initialized
with number 1 through 10.
int i[10] = {1,2,3,4,5,6,7,8,9,10};

This means means that i[0] will have the value 1 and i[9]
will have the value 10.
Character arrays that will hold strings allow a shorthand
initialization that takes this form:
    char array_name[size] = "string";
is the same as writing:
char str[4] = {'C','+','+','\0'}

Because strings in C++ must end with null, we must
make sure that the array we declared is long enough to include it.
*/
#include <iostream>
using namespace std;

int main()
{
    int i, j;

    int sqrs[10][2] =
    {
        {1,1},
        {2,4},
        {3,9},
        {4,16},
        {5,25},
        {6,36},
        {7,49},
        {8,64},
        {9,81},
        {10,100}
    };  // ← missing semicolon fixed

    cout << "Enter a number between 1 and 10: ";
    cin >> i;

    // look up i
    for (j = 0; j < 10; j++)
    {
        if (sqrs[j][0] == i)
            break;
    }

    cout << "Square of " << i << " is ";
    cout << sqrs[j][1];

    return 0;
}
