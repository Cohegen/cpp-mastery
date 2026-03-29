/*
Cube and cylinder classes that define the characteristics
of a cube and cylinder,of which one of these characteristics is the color of the
object.
To enable the color of a cube and cylinder to be easily compared, you can
define a friend function that compares the color component of each object,
returning true if colors match and false if they differ
*/

#include <iostream>
using namespace std;

class Cylinder; //a forward declaration

enum colors {red, green,yelloe};

class Cube
{
    colors color;
public:
    Cube(colors c) {color = c;}
    friend bool sameColor(Cube x, Cylinder y);
};

class Cylinder
{
    colors color;
public:
    Cylinder (colors c) {color=c;}
    friend bool sameColor (Cube x,Cylinder y);
};

bool sameColor(Cube x, Cylinder y)
{
    if(x.color == y.color) return true;
    else return false;

}

int main()
{
    Cube cube1(red);
    Cube cube2(green);
    Cylinder cy1(green);

    if(sameColor(cube1,cy1))
        cout << "cube1 and cy1 are the same color.\n";
    else
        cout << "cube1 and cy1 are different colors.\n";
    if(sameColor(cube2,cy1))
        cout << "cube2 and cy1 are the same color.\n";
    else
        cout << "cube2 and cy1 are different colors.\n";
}
