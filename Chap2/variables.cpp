/*
Initially, we used to declare using the form
type var-name;
where type is the data type of the variable and var-name is its name.
Another way of intializing a variable is by assigning
a value a the same time that is declared.
It's general form is:
type var = value;
Some examples examples are:
int count = 10; // give count an initial value of 10
char ch = 'X';// intialize ch with the letter X\
float f = 1.2F; //f is initialized with 1.2

Dynamic Intialization
C++ allows variable to be initialized dynamically, using any expression valid at the
time the variable is declared.

*/
//demonstrate dynamic initialization
#include<iostream>
using namespace std;

int main()
{
    double radius =4.0,height = 5.0;

    //dynamically intialize volume
    double volume = 3.1416 * radius * radius *height;

    cout << "Volume is " << volume;

    return 0;
}
