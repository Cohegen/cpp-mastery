/*
Pure virtual function is a function declared in a base class that has no definition
relative to the base.
As a result, any derived class must define its own version, it cannot simply use
the version defined in the base.
To declare a pure virtual function, we use the general form : virtual
type func-name(parameter-list) = 0;

Here type is the return type of the function, and func-name is the name of
the function.

*/

//use a pure virtual function

#include <iostream>
#include <cstring>
using namespace std;

//A class for two-dimensional objects
class TwoDShape
{
    //these are private
    double width;
    double height;

    //add a name field
    char name[20];

public:
    //default constructor
    TwoDShape()
    {
        width = height = 0.0;
        strcpy(name,"unknown");
    }

    //constructor for TwoDShape
    TwoDShape(double w,double h,char *n)
    {
        width = w;
        height = h;
        strcpy(name,n);
    }

    //Construct object with equal width and height
    TwoDShape(double x, char *n)
    {
        width = height = x;
        strcpy(name,n);
    }

    void showDim()
    {
        cout << "Width and height are " <<width << " and " <<height << "\n";

    }

    //acceosr functions
    double getWidth() {return width;}
    double getHeight() {return height;}
    void setWidth(double w) {width =w;}
    void setHeight(double h) {height = h;}
    char *getName() {return name;}

    //area() is now a pure virtual function
    virtual double area() = 0;
};

//Triangle is derived from TwoDShape
class Triangle : public TwoDShape
{
    char style[20]; //now private

public:
    /*
    A default constructor. This automatically invokes
    the default constructor of TwoDShape
    */
    Triangle()
    {
        strcpy(style,"unknown");
    }

    //constructor with three parameters
    Triangle(char *str,double w,double h): TwoDShape(w,h,"triangle")
    {
        strcpy(style,str);
    }

    //construct an isosceles triangle
    Triangle(double x) :TwoDShape(x,"triangle")
    {
        strcpy(style,"isosceles");
    }

    //this now oveerides area() declared in TwoDShape
    double area()
    {
        return getWidth() * getHeight() /2;
    }

    void showStyle()
    {
        cout << "Triangle is " << style << "\n";
    }

};

//A derived class of TwoDShape for Rectangle
class Rectangle : public TwoDShape
{
public:

    //construct  a rectangle
    Rectangle(double w, double h):TwoDShape(w,h,"rectangle") {}

    //construct a square
    Rectangle(double x): TwoDShape(x, "rectangle") {}

    bool isSquare()
    {
        if(getHeight() == getWidth()) return true;
        return false;
    }

    //This is another override of area()
    double area()
    {
        return getHeight() * getWidth();
    }
};

int main()
{
    //declare an array of pointer to TwoDShape objects
    TwoDShape *shapes[4];

    shapes[0] = new Triangle("right",8.0,12.0);
    shapes[1] = new Rectangle(10);
    shapes[2] = new Rectangle(10,4);
    shapes[3] = new Triangle(7.0);

    for(int i=0;i<4;i++)
    {
        cout << "object is " << shapes[i]->getName() << "\n";
        cout << "Area is " << shapes[i]->area() << "\n";

        cout << "\n";
    }

    return 0;
}
