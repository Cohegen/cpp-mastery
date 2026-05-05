#include <iostream>
using namespace std;

class Vec3
{
public:
    int x,y,z;

    Vec3(int a=0,int b=0,int c=0)
    {
        x = a;
        y =b;
        z = c;
    }
    //overload << (output)
    friend ostream& operator << (ostream &out,Vec3 &v)
    {
        out << v.x << "," << v.y <<"," << v.z;
        return out;
    }

    //overloading << (input)
    friend istream& operator >> (istream &in,Vec3 &v)
    {
        in >> v.x >> v.y >> v.z;
        return in;
    }
};

int main()
{
    Vec3 v;

    cout << "Enter 3 values: ";
    cin >> v;

    cout << "Vector is: " << "(" << v<< ")";

    return 0;
}
