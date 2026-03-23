/*
This program is the improved version of classes4.cpp
whereby we are adding a constructor to the vehicle class
*/

#include <iostream>
using namespace std;

//declaring the Vehicle
class Vehicle
{
public:
    int passengers;// number of passengers
    int fuelcap; //fuel capacity in gallons
    int mpg; //fuel consumption in miles per gallon

    //This is a constructor for Vehicle
    Vehicle(int p,int f,int m);
    int range();
};

//implementing the Vehicle constructor
Vehicle::Vehicle(int p, int f, int m)
{
    passengers = p;
    fuelcap = f;
    mpg = m;
}

//implementing the range member function
int Vehicle::range()
{
    return mpg * fuelcap;
}

int main()
{
    //passing values to Vehicle constructor
    Vehicle minivan(7,16,21);
    Vehicle sportscar(2,14,12);

    int range1,range2;

    //computes the range assuming a full tank of gas
    range1 = minivan.range();
    range2 = sportscar.range();

    cout << "Minivan can carry " << minivan.passengers << " with a range of " << range1 << "\n";
    cout << "Sportscar can carry " << sportscar.passengers << " with a range of " << range2 << "\n";

    return 0;
}
