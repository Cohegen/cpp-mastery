/*
Inheritance is a feature that allows one class to inherit the characteristics of another.

In C++,a class that is inherited is called a base class.
The class that does the inheriting is called a derived class.
The derived class inherits all of the members defined by the base class and adds its own, unique elements.

*/

/*
A simple class hierarchy

*/
#include <iostream>
#include <cstring>
using namespace std;

//A class for two-dimensional objects
class TwoDshape
{
public:
    double width;
    double height;

    void showDim()
    {
        cout << "Width and height are " << width << " and " << height << "\n";

    }

};

//Triangle is derived from TwoDshape
class Triangle : public TwoDshape
{
public:
    char style[20];

    double area()
    {
        return width * height / 2;
    }

    void showStyle()
    {
        cout << "Triangle is " << style << "\n";
    }
};

//A derived class of TwoDShape for rectangles
class Rectangle :public TwoDshape
{
public:
    bool isSquare()
    {
        if(width == height) return true;
        return false;
    }
    double area()
    {
        return width * height;
    }
};

int main()
{
    Triangle t1;
    Triangle t2;

    t1.width = 4.0;
    t1.height = 4.0;
    strcpy(t1.style, "isosceles");

    t2.width = 8.0;
    t2.height = 12.0;
    strcpy(t2.style,"right");

    cout << "Info for t1:\n";
    t1.showStyle();
    t1.showDim();
    cout << "Area is " << t1.area() << "\n";

    cout << "\n";
    cout << "Info for t2:\n";
    t2.showStyle();
    t2.showDim();
    cout << "Area is " << t2.area() << "\n";

    Rectangle r1;
    Rectangle r2;

    r1.width = 5.0;
    r1.height = 5.0;
    cout << r1.isSquare() <<endl;
    cout << "Area is " << r1.area() << "\n";

    r2.width = 15.0;
    r2.height = 19.0;
    cout << "Area is " << r2.area() << "\n";

    return 0;

}
