/*
Parameters are added to a constructor the same way that they are added to a function.
We just declare them inside the parentheses after the constructor's name.
for example:
Myclass :: MyClass(int i) {x=i;}

To pass an argument to the constructor, we must associate the values or values being passed with an object
when it is being declared.
C++ provides two ways to do this.
The first method is illustrated here:
     MyClass ob1 = MyClass(101);

This declaration creates a MyClass object called ob1 and pases the value 101 to it.
However, this method is rarely used.
The method we use to accomplish the same thing is:
    MyClass ob1(101);

This is the most common way that parametized objects are declared.
Using this method, the general form of passing arguments to a constructor is:
 class-tye var (arg-list);
Here arglist is a comma-seperated list of arguments that are passed to the constructor.

*/

//A parametized constructor

#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;
    MyClass(int i);//constructor
    ~MyClass(); //destructor

};

//implements a parameterized constructor
MyClass::MyClass(int i)
{
    x=i;

}

//implementing MyClass destructor
MyClass::~MyClass()
{
    cout << "Destructing object whose x value is " << x << "\n";
}

int main()
{
    MyClass t1(5);
    MyClass t2(19);

    cout << t1.x << " " <<t2.x << "\n";

    return 0;
}

/*
In this version of the program,the MyClass() constructor defines one parameter called i,
which is used to initialize the instance variable x.
Thus, when the line.

MyClass ob1(5);

executes, the value 5 is passed to i, which is then assigned to x
*/
