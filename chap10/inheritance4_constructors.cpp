/*
In a hierarchy, it possible for both base classes and derived classes to have their own constructors.
The constructor for a base class constructs the base class portion of the object and the constructor for the
derived class constructs the derived class part.

When only the derived class defines a constructor, the process is straightforward: simply
construct the derived object.
The class portion of the object is constructed automatically using its default
constructor.
*/

//Adding a constructor to Triangle

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
    void showDim()
    {
        cout << "Width and height are " << width << " and " << height << "\n";
    }

    //accessor  functions
    double getWidth() {return width;}
    double getHeight() {return height;}
    void setWidth(double w) {width = w;}
    void setHeight(double h) {heigh = h;}

};


//Triangle is derived from TwoDShape
class Triangle:public TwoDShape
{
    char style[20]; //private

public:
    //Constructor for Triangle
    Triangle(char *str,double w, double h)
    {
        //Initialize the base class portion
        setWidth(w);
        setHeight(h);

        //Initializing the derived class portion
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
