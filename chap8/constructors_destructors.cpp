/*
A constructor initializes an object when it is created
It has the same name as its class and is syntactically similar to a function.
Constructors have no explicit return type.

The general form of a constructor is shown here:
class-name () {

  //constructor code
}
We use a constructor to give initial values to the instance variables defined by the
class, or to perform any other startup procedures required to create a fully formed object.

The complement of the constructor is the destructor.
In many circumstances, an object will need to perform some action or series
of action when it is destroyed.
Local objects are created when the program terminates.
There are many reasons why a destructor may be needed.
For example, an object may need to deallocate memory it had previously allocated, or an open
file may need to be closed.
In C++, it is the destructor that handles these types of operations.
The destructor has the same name as the constructor, but is preceded by a ~.
Like constructor, destructors do not have return types.
*/

/*
A simple constructor and destructor

*/

#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;
    //Declaring constructor and deconstructor
    MyClass(); //constructor
    ~MyClass();//destructor

};

//Implementing MyClass constructor
MyClass :: MyClass()
{
    x=10;
}

//implementing MyClass destructor
MyClass::~MyClass()
{
    cout << "Destructing..\n";
}

int main()
{
    MyClass ob1;
    MyClass ob2;

    cout << ob1.x << " " << ob2.x << "\n";

    return 0;
}

/*
The constructor is specified under public.
This is because the constructor will be called from code defined
outside of its class.
This constructor assigns the instance variable x of MyClass the value 10.
This constructor is called when an object is created

The destructor displays a message but in real programs, the destructor would be used to release
one or more resources such as file handling or memory used by the class.


*/
