/*
Members of a class are often declared as private to prevent their unauthorized use or
tampering.
Inheriting a class does nor overrule the private access restriction.
Thus even though a derived class includes all of the members of its base class, it cannot access
those members of the base class that are private.
For example, if width and height are made private in TwoDShape,as shown in the code below,
Then Triangle will not be able to access them.
*/

//Access to private members is not granted to derived classes
class TwoDshape
{
    //these are now private
    double width;
    double height;

public:
    void showDim()
    {
        cout << "Width and height are " << width << " and " << height << "\n";

    }
};

//Triangle class derived from TwoDshape
class Triangle: public TwoDshape
{
public:
    char style[20];

    double area()
    {
        return width * height / 2; //Error expected since width and height are private hence cannot be accessed

    }
    void showStyle()
    {
        cout << "Triangle is " << style << "\n";
    }
};

/*
The triangle class will not compile because the reference to width and height inside the area() function causes an access violation.
Since width and height are now private, they are accessible only by other members of their own class.
Derived classes have no access to them.

They are many to solve this challenge
1. Is to use protected members.
2.Is to use public functions to provide access to private data.
Functions which provide access to private data are called accessor functions.
*/
