/*
Just as objects can be passed to functions, functions can return objects.
To return an object, first declare the function as returning a class type.
Second, return an object of that type using the normal return statement.
The following program has a member function called mkBigger().
It returns an object that gives val a twice as large as the invoking object
*/

//Returning objects
#include <iostream>
using namespace std;

class MyClass
{
    int val;
public:
    //Normal constructor
    MyClass(int i)
    {
        val = i;
        cout << "Inside constructor\n";
    }
    ~MyClass()
    {
        cout << "Destructing\n";
    }
    int getVal() {return val;}

    //return an object
    MyClass mkBigger()
    {
        MyClass o (val * 2);
        return o;
    }
};

void display(MyClass ob)
{
    cout << ob.getVal() << "\n";

}

int main()
{
    cout << "Before constructing a.\n";
    MyClass a(10);
    cout << "After constructing a.\n\n";

    cout << "Before call to display().\n";
    display(a);
    cout << "After display() returns.\n\n";

    cout << "Before call to mkBigger().\n";
    a = a.mkBigger();
    cout << "After mkBigger () returns. \n\n";

    cout << "Before second call to display().\n";
    display(a);
    cout << "After display() returns \n\n";

    return 0;
}
/*
In this example mkBigger() creates a local object callled o that has val value twice that of the
invoking object.
The object is then returned by the function and assigned to a inside main().
Then o is destroyed, causing the first "Destructing" message to be displayed.

When an object is returned by a function, a temporary object is automatically created, which holds the return value.
It is this object that is actually returned by the function.
After the value has been returned, this object is destroyed.
This is why the output shows a second "Destructing" message just before the message "after mkBigger()" returns.
This temporary object is destroyed.
*/
