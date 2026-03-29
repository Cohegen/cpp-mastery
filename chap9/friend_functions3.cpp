/*
A friend of one class can be a member of another class

*/

/*
A function can be a member of one class and a friend of another
*/

#include <iostream>
using namespace std;

class Cylinder; // forward declaration

enum colors { red, green, yellow };

class Cube
{
private:
    colors color;

public:
    Cube(colors c) : color(c) {}

    bool sameColor(const Cylinder& y); // pass by const reference
};

class Cylinder
{
private:
    colors color;

public:
    Cylinder(colors c) : color(c) {} // constructor added

    // Grant access to Cube::sameColor
    friend bool Cube::sameColor(const Cylinder& y);
};

// Definition of sameColor
bool Cube::sameColor(const Cylinder& y)
{
    return color == y.color; // clean and concise
}

int main()
{
    Cube cube1(red);
    Cube cube2(green);
    Cylinder cy1(green);

    if (cube1.sameColor(cy1))
        cout << "cube1 and cy1 are the same color.\n";
    else
        cout << "cube1 and cy1 are different colors.\n";

    if (cube2.sameColor(cy1))
        cout << "cube2 and cy1 are the same color.\n";
    else
        cout << "cube2 and cy1 are different colors.\n";

    return 0;
}
