// A function that returns a double value

#include <iostream>
using namespace std;

//use double data
double box(double length,double width,double height);

int main()
{
    double answer;

    answer = box(10.1,11.2,3.3); //assign return value
    cout << "The volume of the box is " << answer;

    return 0;
}

//This version of box uses double data
double box(double length,double width,double height)
{
    return length * width * height;
}
