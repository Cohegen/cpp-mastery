/*
Once a function is declared as virtual,it stays virtual no matter how many layers of the derived classes it may
pass through.

When a derived class does not override a virtual function, then the function
the function as defined in the base class is used.
*/

#include <iostream>
using namespace std;

class B
{
public:
    virtual void who()
    {
        cout << "Base\n";
    }
};

class D1:public B
{
public:
    void who()
    {
        cout << "First derivation\n";
    }
};

class D2: public B
{

// who() not defined
};

int main()
{
    B base_obj;

    B *p;

    D1 D1_obj;
    D2 D2_obj;

    p = &base_obj;
    p->who(); //access B's who()

    p = &D1_obj;
    p->who(); //access D1's who()

    p = &D2_obj;
    p->who(); //access B's who() because D2 does not redefine it

    return 0;
}

/*
Because D2 does not override who(), the version who() defined in B is used instead.

We should keep in mind that inherited characteristics of virtual are hierarchial.
Therefore, if the preceding example is changed such that D2 is derived from D1 instead of B, then
when who() is called on an object of type D2, it will not be who() inside B, but the version
of who() declared inside D1 that is called since it is the class closest to D2.
*/
