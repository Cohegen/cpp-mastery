#include <iostream>
using namespace std;
#include <cctype>
#include <cmath>

void roundn(double & arg);



int main()
{
    double x;
    x = 11.10;
    cout << "Original number: " << x<<endl;

    roundn(x);

    cout << "Rounded number is: " << x << endl;;
}



void roundn(double &arg)
{
    arg = round(arg);
}
