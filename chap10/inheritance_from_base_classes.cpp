/*
In C++ it is possible for a derived class to inherit two or more
base classes at the same time.
For example, this short program D inherits both B1 anf B2
*/

#include <iostream>
using namespace std;

class B1
{

protected:
    int x;
public:
    void showx() {cout << x << "\n";}

};

class B2
{
protected:
    int y;
public:
    void showy() {cout << y << "\n";}

};

//inherit multiple base classes
class D:public B1, public B2
{
public:
    /*
    x and y are accessible because hey are protected in B1 and B2
    not private
    */
    void set(int i, int j) {x=i;y=j;}

};

int main()
{
    D ob;

    ob.set(10,20); //provided by D
    ob.showx(); //fromB1
    ob.showy(); // from B2


    return 0;
}
