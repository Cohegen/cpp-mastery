/*
A value passed to a function is called an argument.
When creating a function that takes one or more arguments, variables
that will receive those arguments must also be declared.
These variables are called parameters of the function.

void box(int length,int width,int height)
  {cout << "volume of box is" << length*width*height<<"\n";}

Here the function box has three parameters.
When box is called and values are passed as its parameters, it will calculate
volume using length,width and height parameters.
//calling box
  box(7,20,5)
*/

//simple program that calculates the volume of a box

#include <iostream>
using namespace std;

void box (int length,int width,int height); // box()'s prototype

int main()
{
    box(7,20,4);
    box(50,3,2);
    box(8,6,9);

    return 0;
}

//compute the volume of a box
void box(int length,int width,int height)
{
    cout << "Volume of box is " << length * width * height << "\n";
}
