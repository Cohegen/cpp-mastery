/*
TO return a value, we use the second form of the return statement:
  return value;
Here, value is the value being returned.
This form of the return statement can be only used only with functions that
do not return void.
A function that returns a value must specify the type of that value.

*/

//returning value
#include <iostream>
using namespace std;

int box(int length,int width,int height); // return the volume

int main()
{
    int answer;

    answer = box(10,11,3);
    cout << "The volume is " <<answer;

    return 0;
}

//this function returns a value.
int box(int length,int width,int height)
{
    return length * width * height;
}
