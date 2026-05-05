#include <iostream>
#include <cstring>
using namespace std;

class Base
{
public:

    Base()
    {
        cout << "Base Constructor called " << endl;
    }
    ~Base()
    {
        cout << "Base destructor called " << endl;
    }

};

class Derived :public Base
{
public:

    Derived():Base()
    {
        cout << "Derived constructor called " << endl;
    }
    ~Derived()
    {
        cout << "Derived destructor called " << endl;
    }
};

int main()
{
    Derived b;
    return 0;
}
