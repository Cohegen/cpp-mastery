/*
When a base class has a constructor, the derived class must explicitly
call it to initialize the base class portion of the object.
A derived class can call a constructor defined by its base class by using an expanded
form of the derived class' constructor declaration.

The general form of this expanded declaration is:
 derived-constructor(arg-list) : base-cons(arg-list);
 {

   body of derived constructor

 }

The base-cons is the name of the base class inherited by the derived class.
*/

/*
A program that shows how to pass arguments to a base class constructor.
It defines a constructor for TwoDShape that initializes the width and height property.

*/

//Add a constructor to TwoDShape

#include <iostream>
#include <cstring>
using namespace std;

//A class for two-dimensional objects.
class TwoDShape
{
    //these are private
    double width;
    double height;

public:

    //constructor for TwoDShape
    TwoDShape(double w, double h)
    {
        width = w;
        height = h;
    }

    void showDim()
    {
        cout << "Width and height are " << width << " and " << height << "\n";
    }

    //accesssor functions
    double getWidth() {return width;}
    double getHeight() {return height;}
    double setWidth(double w) {width = w;}
    double setHeight(double h) {height = h;}

};

//Triangle is derived from TwoDShape
class Triangle :public TwoDShape
{
    char style[20]; // now private

public:

    //Constructor for triangle
    Triangle(char *str, double w,double h):TwoDShape(w,h)//calling TwoDShape constructor
    {

        strcpy(style,str);
    }

    double area()
    {
        return getWidth() * getHeight() / 2;
    }

    void showStyle()
    {
        cout << "Triangle is " << style << "\n";
    }
};

int main()
{
    Triangle t1("isoscles",4.0,4.0);
    Triangle t2("right",8.0,12.0);

    cout << "Info for t1:\n";
    t1.showStyle();
    t1.showDim();
    cout << "Area is " <<t1.area() << "\n";

    cout << "\n";
    cout << "Info for t2:\n";
    t2.showStyle();
    t2.showDim();
    cout << "Area is " << t2.area() << "\n";


    return 0;
}
