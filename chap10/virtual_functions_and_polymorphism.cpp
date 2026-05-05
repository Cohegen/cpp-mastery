/*
A virtual function is a function that is declared as virtual in a base class
and redefined in one or more derived classes.
Thus each derived class can have its own version of a virtual function.

When a virtual function is called through a base class pointer, C++ determines which
version of that function to call based upon the type of object pointed to
by the pointer.

This determination is made at runtime.
Thus when different objects are pointed to, different version of the virtual functions are executed.
In short it's the type of object being pointed that determines which
version of the virtual function will be executed.

Thus if a base class contains a virtual function and if two or more different classes are derived from that base class, then when
different types of objects are pointed through a base class pointer, different version of the virtual function are executed.

A class that includes a virtual function is called a polymorphic class.
This term also applies to a class that inherits a base class containing a virtual function
*/

//short example that uses a virtual function

#include <iostream>
using namespace std;

class B
{
public:
    virtual void who()
    {
        //specify a virtual function
        cout << "Base\n";
    }

};

class D1 : public B
{
public :
    void who()
    {
        //redefining who() for D1
        cout << "First derivation\n";
    }
};

class D2: public B
{
public:
    void who()
    {
        //redefine who() for D2
        cout << "Second derivation\n";
    }
};

int main()
{
    B base_obj;
    B *p;
    D1 D1_obj;
    D2 D2_obj;

    p = &base_obj;
    p->who(); //access B's who

    p = &D1_obj;
    p->who(); //access D1's who

    p = &D2_obj;
    p->who(); //access D2's who

    return 0;
}

/*
We can see in B, the function who() is declared as virtual.
This means the function can be redefined by a derived class.
Inside both and D1 and D2, who() is redefined relative to each class.

Inside main, we have four variables declared: base_obj,which is an object of the type B, p
which is a pointer to B objects, and D1_obj and D2_obj, which are objects of the two derived classes.
Next, p is assigned the address of the base_obj and the who() function is called.
Since who() is declared as virtual, C++ determines at runtime which version of who() to execute based on the type of object pointed to by p.

*/
