//Constructor, destructor and passing objects

#include <iostream>
using namespace std;

class MyClass
{
    int val;
public:
    MyClass(int i)
    {
        val =i;
        cout << "Inside constructor\n";
    }
    ~MyClass() { cout << "Destructing\n";}
    int getval() { return val;}
};

void display(MyClass ob)
{
    cout << ob.getval() << "\n";
}

int main()
{
    MyClass a(10);

    cout << "Before calling display(). \n";
    display(a);

    cout << "After display() returns.\n";

    return 0;
}
