/*
We know that a private member of a base class is not accessible by
a derived class.
C++ allows us to create a protected member.
A protected member is public within a class hierarchy, but private
outside that hierarchy.

A protected member is created by using the protected access modifier.
When a member of a class is declared as protected, that member is, with one important
exception private.
The exception occurs when a protected member is inherited.
In this case, the protected member of the base class is accessible by the derived class.
Therefore, by using protected, we can create class members that are private to their class
but can still be inherited and accessed by a derived class.
The protected specifier can also be used with structures.
*/

//Demonstrating protected members

#include <iostream>
using namespace std;

class B
{
protected:
    int i,j; //private to B, but accessible to D
public:
    void set(int a, int b) {i=a;j=b;}
    void show() {cout << i << " " << j << "\n"; }
};

class D:public B
{
    int k;
public:
    // D may access B's private member i and j
    void setk() {k=i*j;}

    void showk() {cout << k << "\n";}

};

int main()
{
    D ob;

    ob.set(2,3); // Ok, set() is public in B
    ob.show(); // ok, show() is public B


    ob.setk();
    ob.showk();

    return 0;
}

/*
The code works because B is inherited by D as public and because i and j are declared as protected, D's function
setk() can access them.
If i and j were declared as private by B, then D would not have access to them,and the program would not compile.

When a base class is inherited as public,protected  members of the base class become protected
members of the derived class.
When a base class is inherited as private, protected members of the base class become private members of the derived class.

*/
