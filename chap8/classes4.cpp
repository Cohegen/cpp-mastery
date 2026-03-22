/*
A program that creates two Vehicle objects
*/

#include <iostream>
using namespace std;

//Declare the Vehicle class
class Vehicle
{
public:
    int passengers; //number of passengers
    int fuelcap;//fuel capacity in gallons
    int mpg; //fuel consumption in miles per gallon
};

int main()
{
    Vehicle minivan; //creates a Vehicle object
    Vehicle sportscar; //create another object

    int range1, range2;

    //assign values to fields in minivan
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    //assigning values to fields in sportscar
    sportscar.passengers = 2;
    sportscar.fuelcap = 14;
    sportscar.mpg = 12;

    //computing the range assuming a full tank of gas
    range1 = minivan.fuelcap * minivan.mpg;
    range2 = sportscar.fuelcap * sportscar.mpg;


    cout << "Minivan can carry " << minivan.passengers << " with a range of " << range1 << "\n";
    cout << "Sportscar can carry " << sportscar.passengers << "with a range of " << range2 << "\n";

    return 0;

}
