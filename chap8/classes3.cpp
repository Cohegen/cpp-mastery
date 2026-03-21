/*
This is an extension of classes2.cpp
*/

//A program that uses the Vehicle class

#include <iostream>
using namespace std;

//declaring the vehicle class
class Vehicle
{
public:
    int passengers; // numbers of passengers
    int fuelcap; //fuel capacity in gallons
    int mpg; // fuel consumption in miles per gallon


};

int main()
{
    Vehicle minivan; //creates a vehicle object
    int range;
    //assign values to filed in minivan
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    //compute the range assuming a full tank of gas
    range = minivan.fuelcap * minivan.mpg;

    cout << "Minivan can carry " << minivan.passengers << " with a range of " << range << "\n";
    return 0;
}
