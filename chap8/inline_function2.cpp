/*
Another way of creating an inline function is by defining the code to a member function
inside a class definition.
Any function that is defined inside a class definition is automatically made into an
inline function.

*/

#include <iostream>
using namespace std;

class cl
{
    int i; //private by default
public:
    //automatic inline functions
    int get_i() {return i;}
    void put_i(int j) {i=j;}
};

int main()
{
    cl s;

    s.put_i(10);
    cout << s.get_i();

    return 0;
}
