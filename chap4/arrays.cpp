/*An array is a collection of variables of the same
type that are referred to by a common name.
Arrays may have from one to several dimensions.
A pointer is an object that contains a memory address.

The general form of a one-dimensional array declaration is:
type name[size];

Here the type declares the base type of the array.
The base type determines that the data type of each
element that makes up the array.
The number of elements the array can hold is specified by size.
For example the following declares an integer array named sample that
is ten elements long;

int sample[10];

An individual element within an array is accessed through an index.
An index describes the position of an element within an array.
In C++ all arrays have zero as the index of their first element.
To index an array, specify the number of the elements you want, surrounded by square brackets.
Therefore the first element is sample[0],and the last element is sample[9]
*/

#include <iostream>
using namespace std;

int main()
{
    int sample [10]; // this reserves 10 integer elements
    int t;

    //load the array
    for(t=0;t<10;t++) sample[t] = t;

    //display the array
    for(t=0;t<10;++t)
        cout << "This is sample[" << t << "]: " << sample[t] << "\n";


    return 0;
}
