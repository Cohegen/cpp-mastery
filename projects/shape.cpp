#include <iostream>
using namespace std;

class Shape
{
public:

    Shape()
    {
        cout << "Shape constructor called: "<<endl;
    }
     virtual void draw()
    {
        cout << "Drawing Shape";
    }
};
class Circle:public Shape
{
public:

    Circle():Shape()
    {
        cout << "Circle constructor called:"<<endl;
    }

    void draw() override
    {
        cout << "Drawing circle\n";
    }
};

int main()
{
    Shape *s = new Circle();
    s->draw();
    return 0;
}
