/*
In C++ two or more functions can share the same name as long as their parameter
declaration are different.
In this situation, the functions that share the same name are said to be overloaded,
and process is referred to as function overloading.
Function overloading is one way that C++ achieves polymorphism.
The type and number of parameters of each overloaded function must differ.
They must differ in the types or number of their parameters.
Of course,overloaded functions may differ in their return types too.
When an overloaded function is called, the version of the function whose parameters
match the arguments is executed.
*/

//Overload a function three times

#include <iostream>
using namespace std;

void f(int i); //integer parameter
void f(int i,int j); //two integer parameters
void f(double k); // one double parameter

int main()
{
    f(10); //call f(int)

    f(10,20); // call f(int, int)

    f(12.23); // call f(double)

    return 0;
}

void f(int i)
{
    cout << "In f(int), i is " << i << "\n";
}

void f(int i, int j)
{
    cout << "In f(int, int), i is " << i;
    cout << ",  j is " << j << '\n';

}

void f(double k)
{
    cout << "In f(double), k is " <<k << '\n';
}
