/*
Here the Vehicle class is recoded so that its constructor,destructor and range()
function are defined inside the class.
Also the passenger,fuelcap and mpg fields have been made private and accesor functions
have been added to get their values.

*/
//Defines constructor,destructor and range() function in-line

#include <iostream>
using namespace std;

//declaring the vehicle class
class Vehicle
{
    //these are now private
    int passengers; //number of passengers
    int fuelcap;//fuel capacity in gallons
    int mpg;//fuel consumption in miles per gallon

public:
    //this is a constructor for vehicle
    Vehicle(int p,int f,int m)
    {
        passengers = p;
        fuelcap = f;
        mpg = m;
    }

    //computing and returning the range
    int range() {return mpg*fuelcap; }

    //accessor functions,
    int get_passengers() {return passengers;}
    int get_fuelcap() {return fuelcap;}
    int get_mpg () { return mpg;}

};

int main()
{
    //passing values to vehicle constructor
    Vehicle minivan(7,16,21);
    Vehicle sportscar(2,14,12);

    int range1, range2;

    //computing the ranges assumming a full tank of gas
    range1 = minivan.range();
    range2 = sportscar.range();

    cout << "Minivan can carry " << minivan.get_passengers() << " within a range of " << range1 << "\n";
}
