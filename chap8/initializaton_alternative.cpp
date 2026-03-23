/*
If a constructor takes only one parameter, the we can use an alternative
method to initialize it.
*/

//Alternative initialization method

#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;

    //declaring constructor and destructor
    MyClass(int i); // constructor
    ~MyClass(); // destructor

};

//implementing a parameterized constructor
MyClass::MyClass(int i)
{
    x = i;
}

MyClass::~MyClass()
{
    cout << "Destructing object whose x value is " << x << "\n";
}

int main()
{
    MyClass ob = 5; //calls MyClass(5)

    cout << ob.x << "\n";

    return 0;
}

/*
In this form:
   MyClass ob=5;

5 is automatically passed to the i parameter in the MyClass() constructor.

*/
