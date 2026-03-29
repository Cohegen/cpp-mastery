//overloading the constructors

#include <iostream>
using namespace std;

class Sample
{
public:
    int x;
    int y;

    //overloading the default constructor
    Sample() {x=y=0;}

    //constructor with one parameter
    Sample(int i) {x=y=i;}

    //constructor with two parameters
    Sample(int i,int j) {x=i;y=j;}
};

int main()
{
    Sample t; //invoke default constructor
    Sample t1(5); //use Sample(int)
    Sample t2(9,10); //use Sample(int,int)


    cout << "t.x" << t.x <<", t.y: " << t.y << "\n";
    cout << "t1.x: " << t1.x << ", t1.y: " << t1.y << "\n";
    cout << "t2.x: " << t2.x <<", t2.y: " <<t2.y << "\n";

    return 0;
}
/*
This program creates three constructors.
The first is a parameterless constructor, which initializes both x and y to zero.
This constructor becomes the default constructor, replacing the default constructor supplied automatically by C++.
The second takes one parameter,assigning its value to both x and y.
The third constructor takes two parameters, initializing x and y individually.

Overloaded constructors are beneficial for several reasons.
First they add flexibility to the classes that we create, allowing an object to be constructed in
a variety of ways.

Second, they offer convenience to the user of your class by allowing an object to be constructed in the
most natural way for the given task.
*/
