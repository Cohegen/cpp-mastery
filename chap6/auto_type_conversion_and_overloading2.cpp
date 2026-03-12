//Now, add f(short)

#include <iostream>
using namespace std;

void f(int x);
void f(short x);
void f(double x);

int main()
{
    int i = 10;
    double d = 10.1;
    short s = 99;
    float r = 11.5F;

    f(i); // calls f(int)
    f(d); // calls f(double)

    f(s); //  now calls f(short)

    f(r); //calls f(double) -- type conversion

    return 0;

}

void f(int x)
{
    cout << "Inside f(int): " << x << "\n";
}

void f(short x)
{
    cout << "Inside f(short): " << x << "\n";
}

void f(double x)
{
    cout << "Inside f(double): " << x << "\n";
}
