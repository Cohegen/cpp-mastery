#include <iostream>
using namespace std;

class B
{
public:

    B() {cout << "Constructing base portion\n";}
    ~B() {cout << "Destructing base portion\n";}

};

class D : public B
{
public:
    D() {cout << "Constructing derived portion\n";}
    ~D() {cout << "Destructing derived portion\n"; }

};

int main()
{
    D ob;

    //do nothing but  construct and destruct ob

    return 0;

}

/*
After running this program we realize that when a derived class
is created, the base class constructor is called first, followed by the constructor for the derived
class.
When a derived object is destroyed, its destructor is called first, followed by that of the base class.
Constructors are executed in order of their derivation whereas the destructors are executed in reverse order of
derivation.

*/
