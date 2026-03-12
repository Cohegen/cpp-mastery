/*
Automatic type conversions can affect
overloaded function resoltion
*/
#include <iostream>
using namespace std;

void f(int x);
void f(double x);

int main()
{
    int i = 10;
    double d = 10.1;
    short s = 99;
    float r = 11.5F;

    f(i); //calls f(int)
    f(d); //calls f(double)

    f(s); //calls f(int) --type conversion
    f(r); //calls f(double) --type conversion


    return 0;
}

void f(int x)
{
    cout << "Inside f(int): " << x << "\n";

}

void f(double x)
{
    cout << "Inside f(double): " << x << "\n";
}
