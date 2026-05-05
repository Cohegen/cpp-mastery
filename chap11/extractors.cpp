/*
An extractor must return a reference to an object of the type istream.
The first parameter must be a reference to an object of type istream
This is the stream that occurs on the left side of the >>.
The second parameter is a reference to the variable that will be receiving input.

*/

#include <iostream>
using namespace std;

class ThreeD
{
    int x, y, z; // 3-D coordinates
public:
    ThreeD(int a, int b, int c) : x(a), y(b), z(c) {}

    friend ostream &operator<<(ostream &stream, const ThreeD &obj);
    friend istream &operator>>(istream &stream, ThreeD &obj);
};

// Display X,Y,Z coordinates
ostream &operator<<(ostream &stream, const ThreeD &obj)
{
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << "\n";
    return stream;
}

// Get three dimensional values
istream &operator>>(istream &stream, ThreeD &obj)
{
    stream >> obj.x >> obj.y >> obj.z;
    return stream;
}

int main()
{
    ThreeD a(1, 2, 3);
    cout << a;

    cout << "Enter X,Y,Z values: ";
    cin >> a;

    cout << a;

    return 0;
}