#include <iostream>
using namespace std;

class Complex
{
public:
    int real,imag;

    Complex(int r,int i)
    {
        real = r;
        imag = i;
    }

    //Overloading the + operator
    Complex operator + (Complex comp)
    {
        Complex temp(0,0);
        temp.real = real + comp.real;
        temp.imag = imag + comp.imag;
        return temp;
    }

    //overloading << operator
    friend ostream& operator << (ostream& out,const Complex& c)
    {
        out << c.real << "+" << c.imag <<"i";
        return out;
    }
};

int main()
{
    Complex c1(1,2);
    Complex c2(3,4);


    Complex c3 = c1+c2;

    cout << c3;
    return 0;
}
