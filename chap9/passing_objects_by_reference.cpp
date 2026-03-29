/*
In this case the reference to the object is passed, and the function
operates directly on the object used as an argument.
Thus changes made to the parameter will affect the argument, and passing an object by
reference is not applicable to all situations.
It has two benefits.
First, because only the an address to the object is being passed rather than the
entire object, passing an object by reference can be much faster and more efficient than passing an object by value.
Second when an object is passed by reference, no new object comes into existence, so no time is wasted constructing
or destructing a temporary object.

*/

//constructors, destructors and passing objects
#include <iostream>
using namespace std;

class MyClass
{
    int val;
public:
    MyClass(int i)
    {
        val = i;
        cout << "Inside constructor\n";
    }
    ~MyClass() { cout << "Destructing\n";}
    int getval() { return val;}
    void setval(int i) {val=i;}

};

void display(MyClass &ob)
{
    cout << ob.getval() << "\n";

}
void change(MyClass &ob)
{
    ob.setval(100);
}

int main()
{
    MyClass a(10);

    cout << "Before calling display().\n";
    display(a);
    cout << "After display() returns.\n";

    change(a);
    cout << "After calling change().\n";
    display(a);

    return 0;
}
/*
Both the display() and change() use reference parameters.
Thus, the address of the argument, not  copy of the argument is passed and the functions
operate directly on the argument.
For example when change is called, a is passed by reference.
Thus changes made to the parameter ob in change() affects a in main().
*/
