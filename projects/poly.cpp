/*
A program that tests polymorphism
*/
#include <iostream>
#include <cstring>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "Vehicle constructor called!!"<<endl;
    }
    virtual void show()
    {
        cout << "This is a vehicle"<<endl;
    }
};
class Ferrari:public Vehicle
{
public:
    Ferrari():Vehicle()
    {
        cout << "Ferrari constructor called!"<<endl;
    }
    void show() override
    {
        cout << "This is a ferrari!!"<<endl;
    }
};

int main()
{

    //Vehicle c1;
    //c1.show();
    Ferrari f1;

    Vehicle *s = & f1;
    s->show();

    return 0;
}
