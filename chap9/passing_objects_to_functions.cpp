/*
An object can be passed to a function in the same way as any other data type.
Objects are passed to functions using normal C++ call-by-value parameter-passing convention.
This means that a copy of the object, not the actual object itself, is passed to the function.
Therefore changes made to the object inside the function do not affect the object used as the argument to the function
*/

//pass an object to a function

#include <iostream>
using namespace std;

class MyClass
{
    int val;
public:
    MyClass(int i)
    {
        val = i;
    }
    int getval() {return val;}
    void setval(int i) {val=i;}

};

void display(MyClass ob)
{
    cout << ob.getval() << "\n";
}

void change(MyClass ob)
{
    ob.setval(100);//no effect on argument

    cout << "Value of ob inside change(): ";
    display(ob);
}

int main()
{
    MyClass a(10);

    cout << "Value of a before calling change(): ";
    display(a);

    change(a);

    cout << "Value of a after calling change(): ";
    display(a);

    return 0;
}
