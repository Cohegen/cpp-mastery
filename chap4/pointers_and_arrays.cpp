/*
In C++,there is a close relationship between pointer and arrays.
Consider this code fragment:
  char str[80]; char *p1;
  p1 = str;

Here, str is an array of 80 characters and p1 is a character pointer.
However, the line that has p1 = str is a bit interesting.
In this line, p1 is assigned to the address of the first element in the str array.
This implies that after the assignment p1 will point to str[0].
This because in C++, using the name of an array without index generates a pointer
to the first element in the array.
Thus the assignment:
   p1 = str
assigns the address of str[0] to p1.
Note: When an unindexed array name is used in an expression, it yields
a pointer to the first element in the array.
Since,after the assignment, p1 points to the beginning of str, we can use
p1 to access elements in the array.
For example, if we want to access the fifth element in str, we can use
str[4] or *(p1+4)
Both statements obtain the fifth element.
A 4 is added to the pointer p1 to get the fifth element, because p1
currently points to the first element of str.

The parentheses surrounding p1+4 are necessary because * operation has higher priority than
+ operation.
Without them, the expression would first find the value pointed to by p1 and
then add 4 to it.
So generally, C++ allows to methods of array accessing they are: pointer arithmetic
and array indexing.
Pointer arithmetic is much faster than array indexing especially when we are
accessing an array in strictly sequential order.

*/
/*
A program that demonstrates the difference between using array
indexing and pointer arithmetic to access the elements of an array.
But this one sues array indexing
*/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int i;
    char str[80] = "This is A test";
    cout << "Original string: " << str << "\n";
    for (i=0;str[i];i++)
    {
        if(isupper(str[i]))//isupper returns true when its argument is an uppercase letter
            str[i] = tolower(str[i]);
        else if (islower(str[i]))//islower returns true when its argument is a lowercase letter.
            str[i] = toupper(str[i]);
    }
    cout << "Inverted-case string: "<< str;
    return 0;
}
