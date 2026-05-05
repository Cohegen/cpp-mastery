//creating a subclass of Vehicle called Truck

#include <iostream>
using namespace std;

//Declaring the Vehicle class
class Vehicle
{
    //These are private
    int passengers;
    int fuelcap;
    int mpg;

public:
    Vehicle(int p,int f,int m)
    {
        passengers = p;
        fuelcap=f;
        mpg = m;
    }

    //Computes and returns the range
    int range() {return mpg*fuelcap;}

    //Accessor functions
    int get_passengers() {return passengers;}
    int get_fuelcap() {return fuelcap;}
    int get_mpg() {return mpg;}

};

//use Vehicle to create a Truck specialization
class Truck:public Vehicle
{
    int cargocap;
public:
    //This is a constructor for truck
    Truck(int p,int f,int m,int c):Vehicle(p,f,m)
    {
        cargocap = c;
    }

    //Accesor functions for cargocp
    int get_cargocap() {return cargocap;}

};

int main()
{
    //constructo some trucks
    Truck semi(2,200,7,44000);
    Truck pickup(3,28,15,2000);
    int dist = 252;

    cout << "Semi can carry " << semi.get_cargocap() << " pounds.\n";

    cout << "It has a range of " << semi.range() << " miles.\n";
    cout << " To go " << dist << " miles semi needs " << dist / semi.get_mpg() << " gallons of fuel.\n\n";

    cout << "Pickup can carry " << pickup.get_cargocap() << " pounds.\n";

    cout <<"It has  a range of " << pickup.range() << " miles.\n";

    cout << "To go " << dist << " miles pickup needs " << dist /pickup.get_mpg() << " gallons of fuel.\n";

    return 0;
}
