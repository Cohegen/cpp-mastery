//using virtual functions and polymorphism

#include <iostream>
#include <string>
using namespace std;

// Base class for two-dimensional shapes
class TwoDShape
{
private:
    double width;
    double height;
    string name;

public:
    // Default constructor
    TwoDShape()
    {
        width = height = 0.0;
        name = "unknown";
    }

    // Constructor with width, height, and name
    TwoDShape(double w, double h, string n)
    {
        width = w;
        height = h;
        name = n;
    }

    // Constructor for equal width and height
    TwoDShape(double x, string n)
    {
        width = height = x;
        name = n;
    }

    // Virtual destructor (IMPORTANT)
    virtual ~TwoDShape() {}

    void showDim()
    {
        cout << "Width and height are " << width << " and " << height << "\n";
    }

    // Accessors
    double getWidth() { return width; }
    double getHeight() { return height; }
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }
    string getName() { return name; }

    // Virtual area function
    virtual double area()
    {
        cout << "Error: area() must be overridden.\n";
        return 0.0;
    }
};

// Triangle class
class Triangle : public TwoDShape
{
private:
    string style;

public:
    // Default constructor
    Triangle()
    {
        style = "unknown";
    }

    // Constructor with parameters
    Triangle(string str, double w, double h)
        : TwoDShape(w, h, "Triangle")
    {
        style = str;
    }

    // Isosceles triangle constructor
    Triangle(double x)
        : TwoDShape(x, "Triangle")
    {
        style = "isosceles";
    }

    // Override area()
    double area()
    {
        return getWidth() * getHeight() / 2;
    }

    void showStyle()
    {
        cout << "Triangle is " << style << "\n";
    }
};

// Rectangle class
class Rectangle : public TwoDShape
{
public:
    // Constructor
    Rectangle(double w, double h)
        : TwoDShape(w, h, "Rectangle") {}

    // Square constructor
    Rectangle(double x)
        : TwoDShape(x, "Rectangle") {}

    bool isSquare()
    {
        return getHeight() == getWidth();
    }

    // Override area()
    double area()
    {
        return getHeight() * getWidth();
    }
};

int main()
{
    // Array of base class pointers
    TwoDShape *shapes[5];

    shapes[0] = new Triangle("right", 8.0, 12.0);
    shapes[1] = new Rectangle(10);
    shapes[2] = new Rectangle(10, 4);
    shapes[3] = new Triangle(7.0);
    shapes[4] = new TwoDShape(10, 20, "Generic");

    for (int i = 0; i < 5; i++)
    {
        cout << "Object is: " << shapes[i]->getName() << "\n";
        cout << "Area is: " << shapes[i]->area() << "\n";
        cout << "\n";
    }

    // Free memory
    for (int i = 0; i < 5; i++)
    {
        delete shapes[i];
    }

    return 0;
}
