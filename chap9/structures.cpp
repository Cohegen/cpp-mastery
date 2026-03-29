/*
Structures are inherited from the C language and are declared using
the keyword struct.
A struct is syntactically similar to a class, and both create a class type.
In C language, a struct contain contain only data members, but this limitation does
not apply to C++.
In C++, the struct is essentially just an alternative way to specify a class.
In fact, in C++ the only difference between a class and struct is that by default all members are public in a struct
and private in a class.
In all other respects, structures and classes are equivalnent.
*/

#include <iostream>
using namespace std;

struct Test
{
    int get_i() {return i;} //these are public
    void put_i(int j) {i=j;} // by default

private:
    int i;
};

int main()
{
    Test s;

    s.put_i(10);
    cout << s.get_i();

    return 0;
}
