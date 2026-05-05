#include <iostream>
using namespace std;
class Shape
{
public:
    Shape()
    {
        cout <<"Shape constructor called!"<<endl;
    }
    virtual void area()
    {
        cout << "No area";
    }
};

class Circle :public Shape
{
public:
    Circle():Shape()
    {
        cout <<"Circle constructor called"<<endl;
    }
    void area() override
    {
        cout << "Calculating circle area"<<endl;
    }
};

class Rectangle:public Shape
{
public:
    Rectangle():Shape()
    {
        cout << "Rectangle constructor called" <<endl;
    }

    void area() override
    {
        cout << "Calculating rectangle area" << endl;
    }
};

int main()
{
    Circle c1;
    Rectangle r1;
    Shape *s[2] = {&c1,&r1};

    for(int i=0;i<2;i++)
    {
         s[i]->area();
    }


    return 0;
}
