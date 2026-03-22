/*
Member functions manipulate the data defined by the class and in many cases,
provide access to that data.

Let's add a range() member function which computes the range of each vehicle object.

// Declare the Vehicle class
class Vehicle
{

   int passengers; // number of passengers
   int fuelcap; // fuel capacity in gallons
   int mpg; //fuel consumption in miles per gallon

   int range(); //computes and returns the range

}

To implement a member function, we must tell the compiler which class the function
belongs by qualifying the function's name with its class name.
For example, here is one way to code the range function.

// implement the range member function.
  int Vehicle::range()
  {

    return mpg * fuelcap;

  }
The :: operator separates the class name Vehicle from the function name range().
The :: is called the scope resolution operator.
It links a class name with a member name in order to tell the compiler what class the
member belongs to.
*/

/*
A program that uses the Vehicle class

*/
#include <iostream>
using namespace std;

// Declare the Vehicle class
class Vehicle
{
public:
    int passengers; // number of passengers
    int fuelcap;    // fuel capacity in gallons
    int mpg;        // miles per gallon

    int range();    // computes and returns the range
};

// Implementing the range member function
int Vehicle::range()
{
    return mpg * fuelcap;
}

int main()
{
    Vehicle minivan;     // creates a Vehicle object
    Vehicle sportscar;   // creates another object

    int range1, range2;

    // assign values to fields in minivan
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    // assign values to fields in sportscar
    sportscar.passengers = 2;
    sportscar.fuelcap = 14;
    sportscar.mpg = 12;

    // computing the range assuming a full tank
    range1 = minivan.range();
    range2 = sportscar.range();

    cout << "Minivan can carry " << minivan.passengers
         << " passengers with a range of " << range1 << "\n";

    cout << "Sportscar can carry " << sportscar.passengers
         << " passengers with a range of " << range2 << "\n";

    return 0;
}
