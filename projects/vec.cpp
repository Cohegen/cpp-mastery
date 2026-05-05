#include <iostream>
using namespace std;

class Vec3
{
public:
    int x, y, z;

    Vec3(int a=0, int b=0, int c=0)
    {
        x = a;
        y = b;
        z = c;
    }

    Vec3 operator+(const Vec3 &v) const
    {
        return Vec3(x + v.x, y + v.y, z + v.z);
    }

    Vec3 operator-(const Vec3 &v) const
    {
        return Vec3(x - v.x, y - v.y, z - v.z);
    }

    int operator*(const Vec3 &v) const  // dot product
    {
        return x * v.x + y * v.y + z * v.z;
    }

    //scalar multiplication
    friend Vec3 operator*(int& a,const Vec3 &v)
    {
        return Vec3(a*v.x,a*v.y,a*v.z);
    }

    friend ostream &operator<<(ostream &out, const Vec3 &v)
    {
        out << v.x << "," << v.y << "," << v.z;
        return out;
    }
};

int main()
{

    Vec3 v2(4,5,6);
    int e = 12;

    Vec3 v3 = e*v2;
    cout << v3;

    return 0;
}
