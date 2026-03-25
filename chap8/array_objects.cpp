/*
We can create arrays of objects in the same way we create arrays of any data type.
The objects that comprise the elements of the array are accessed using the normal array-index syntax.

*/

#include <iostream>
using namespace std;

class MyClass
{
    int x;
public:
    void set_x(int i) {x=i;}
    int get_x() {return x;}

};

int main()
{
    MyClass obs[4];
    int i;

    for(i=0;i<4;i++)
        obs[i].set_x(i);
    for(i=0;i<4;i++)
        cout << "obs[" << i <<"].get_x(): " << obs[i].get_x() << "\n";

    return 0;
}
