/*
This program implements a Complex number class
*/
#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;
public:
    Complex(){real=0;imag=0;}
    Complex(int r,int im){real=r;imag=im;}
    friend void numbers(const Complex& c1);
};

void numbers(const Complex& c1)
{
    cout << "The complex number is : " << c1.real<< " + " <<c1.imag<<"i";
}

int main()
{
    Complex c(1,5);
    numbers(c);
    return 0;
}
