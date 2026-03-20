/*
C++ allows us to define new data type names with the typedef keyword.
When we use typedef, we are not actually creating a new data type, but rather defining
a new name for an existing type.
This process can help make machine-dependent programs more portable, only the
typedef statements have to be changed.
It also helps us to self-document our code by allowing descriptive names for the standard
data types.
The general form of the typedef statement is:
typedef type name;

where type is any valid data type, and name is the new name for this type.
The new name you define is in addition to , not a replacement for the existing type  name.


*/

#include <iostream>
using namespace std;

typedef int Age;

int main()
{
    Age studentAge = 20;
    cout << studentAge;
}
