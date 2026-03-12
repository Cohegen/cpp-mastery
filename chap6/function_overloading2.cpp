/*
Creating three different functions each with a different name, such as ineg(),
lneg() and fneg() is easy.
However, through the use of function overloading, we can use one name, such as
neg(), to refer to all functions that return the negation of their argument.
Thus,overloading supports the polymorphic concept of "one interface, multiple methods"
*/
//create various version of the neg() function

#include <iostream>
using namespace std;

int neg(int n); //neg() for int.
double neg(double n); //neg() for double
long neg(long n); // neg() for long

int main()
{
    cout << "neg(-10): " << neg(-10) << "\n";
    cout << "neg(9L): " << neg(9L) << "\n";
    cout << "neg(11.23): " << neg(11.23) << "\n";

    return 0;
}

//neg() for int
int neg(int n)
{
    return -n;
}

//neg() for double
double neg(double n)
{
    return -n;
}

//neg() for long
long neg(long n)
{
    return -n;
}
