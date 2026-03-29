/*
When an object is passed to or returned from a function,
a copy of the object is made.
By default, the copy is a bitwise clone of the original object.
This default behavior is often acceptable, but in cases where it is not,
you can control precisely how a copy of an object is made by explicitly defining a copy constructor.
A copy constructor is a special type of overloaded constructor that is automatically invoked when a copy of
an object is required.
C++ defines two distinct types of situations in which value of one object is given to another.
The first situation is assignment.
The second situation is initialization, which can occur in ways:
  When one object explicitly initializes another, such as declaration
  When a copy of an object is made to be passed to a function
  When a temporary object is generated.

The copy constructor applies only to initializations.
The copy constructor does not apply to assignments.
The most common form of copy constructor is as below:
   classname(const classname &obj){
   //body of constructor
   }
Here, obj is a reference to an object that is being used to initialize another object.
For example, assuming an class called MyClass and y as an object of type MyClass, then the following statements would invoke the
MyClass copy constructor

MyClass x=y;//explicitly initializing
x func1(y);// y  passed as a parameter
y= func2(); //y receiving a returned object

In the first two cases, a reference to y would be passed to the copy constructor.
In the third a reference to the object returned by func2() would be passed to the copy constructor.
Thus when an object is passed as a parameter, returned by a function or used in an initialization,the
copy constructor is called to duplicate the object.

*/

/*
Copy constructor invoked when passing an object to a function
*/
#include <iostream>
using namespace std;

class MyClass
{
    int val;
    int copynumber;

public:
    //normal constructor
    MyClass(int i)
    {
        val = i;
        copynumber = 0;
        cout << "Inside normal constructor\n";
    }

    //copy constructor
    MyClass(const MyClass &o)
    {
        val = o.val;
        copynumber = o.copynumber + 1;
        cout << "Inside copy constructor.\n";
    }
    ~MyClass()
    {
        if(copynumber ==0)
            cout << "Destructing original.\n";
        else
            cout << "Destructing copy "<<copynumber << "\n";
    }

    int getval() {return val;}
};

void display(MyClass ob)
{
    cout << ob.getval() << "\n";
}

int main()
{
    MyClass a(10);
    display(a);

    return 0;
}
/*
Here's what happens when the program is run.
When a is created inside main(), the value of its copynumber is set to 0 by
the normal constructor.
Next a is passed to ob of display().
When this occurs, the copy constructor is called and a copy of a is created.
In the process,the copy constructor increments the value of copynumber.
When display() returns, ob goes out of scope.
This causes its destructor to called.
Finally when main() returns, a goes out of scope
*/
