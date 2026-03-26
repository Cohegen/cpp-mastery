/*
An inline function is a function that is expanded inline at the point
at which it is invoked, instead of actually being called.
There are two ways to create an inline function.
The fist is to use the inline modifier

For example to create an inline function called f that returns an int and takes no parameters, we declare it like this:
  inline int f()
  {

   //
  }
The reason for inline function efficiency is that every time a function is called, a series
of instructions must be executed both to set up the function call, including pushing any argument onto the stack,
and to return from the function.
However when a function is expanded inline no such overhead exists,and the overall speed of your program will
increase.
Even so,in cases where the inline function is large, the overall size of our program will also increase.
For this reason, the best inline function are those that are small.
Most large functions should be left as normal functions.
*/

//demonstrating inline
#include <iostream>
using namespace std;

class cl
{
    int i; //private by default
public:
    int get_i();
    void put_i(int j);
};

inline int cl::get_i()
{
    return i;
}

inline void cl :: put_i(int j)
{
    i=j;
}

int main()
{
    cl s;

    s.put_i(10);
    cout << s.get_i(i);

    return 0;
}
