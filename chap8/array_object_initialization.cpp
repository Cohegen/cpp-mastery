/*
If a class includes a parameterized constructor, an array of objects can be initialized.
For example in the code sample below, MyClass is a parameterized class and obs is an initialized array of objects of that class
*/

#include <iostream>
using namespace std;

class MyClass
{
    int x;
public:
    MyClass(int i) { x=i;}
    int get_x() { return x;}

};

int main()
{
    MyClass obs[4] = { -1,-2,-3,-4};
    int i;

    for(i=0;i<4;i++)
    {
        cout << "obs[" << i << "].get_x(): " << obs[i].get_x() << "\n";


    }
    return 0;
}
