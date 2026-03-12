/*
It is possible to create a situation in which the compiler is unable to choose between two or
more correctly overloaded functions.
When this happens, the situation is said to ambigoues.
Ambiguous statements are errors,and programs containing ambiguity will not compile.

The main cause of ambiguity involves C++'s automatic type conversions.
C++ automatically attempts to convert the type of the arguments used to call a
function into type of the parameters defined by the function.

An example:
int myfunc(double d)
//...
cout << myfunc('c');// not an error, conversion applied

As the comment indicates, this is not an error, because C++ automatically converts the character c
into its double equivalent.

*/

//overloading ambiguity
#include <iostream>
using namespace std;

float myfunc(float i);

double myfunc(double i);

int main()
{
    //unambigious, calls myfunc(double)
    cout << myfunc(10.1)  << " ";

    //ambiguous
    cout << myfunc(10); //error

    return 0;
}

float myfunc(float i)
{
    return i;
}

double myfunc(double i)
{
    return -i;
}
