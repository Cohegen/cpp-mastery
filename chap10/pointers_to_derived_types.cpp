/*
Pointers to base classes and derived classes are related in many ways that other type of pointers
are not.
In general a pointer of one type cannot point to an object of another type.
However, the base class pointers and derived objects are the exceptions to
this rule.

In C++, the base class pointer can also be used to point to an object of any class
derived from that base.
For example, we assume that we have a base class called B and class D, which is derived from B.
Any pointer declared as a pointer to B can also be used to point to an object of the type D.
Therefore given:
 B *p; //pointer to object of type B
 B B_ob; // object of type B
 D D_ob; // object of type D

 both of the following statements are perfectly valid:
 p = &B_ob; // p  points to object of type B
 p = &D_ob; // p points to object of type D, which is an object derived from B


A base pointer can be sued to access only those parts of the derived objects
that we inherited from the base class.
Thus, in this example, p can be used to access all elements of D_ob inherited fromB_ob.
However, elements specific to D_ob cannot be accessed through p.

Another point to understand is that although a base pointer can be used to point to a derived class
and not the other way round
*/


#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
    string brand;
    int price;

public:
    // Constructor
    Car(string b, int p)
    {
        brand = b;
        price = p;
    }

    // Getters
    string getbrand() { return brand; }
    int getprice() { return price; }

    // Setters
    void setbrand(string br) { brand = br; }
    void setprice(int pr) { price = pr; }

    // Display
    void show()
    {
        cout << "Car brand: " << getbrand() << endl;
        cout << "Car price: " << getprice() << endl;
    }
};

class Ferarri : public Car
{
private:
    int mileage;
    int fuelcap;
    string tirebrand;

public:
    // Constructor with base class initialization
    Ferarri(int m, int fuel, string tire, string b, int p)
        : Car(b, p)
    {
        mileage = m;
        fuelcap = fuel;
        tirebrand = tire;
    }

    // Getters
    int getmiles() { return mileage; }
    int getfuel() { return fuelcap; }
    string getTire() { return tirebrand; }

    // Methods
    void travel_cost()
    {
        cout << "Travel cost is: " << getmiles() * getfuel() << endl;
    }

    void price_car()
    {
        cout << "Cost of buying a Ferrari is: " << getprice() << endl;
    }

    void brand_tire()
    {
        cout << "Tire brand is: " << getTire() << endl;
    }
};

int main()
{
    // Base class object
    Car c1("Ferrari", 100000);
    c1.show();

    cout << endl;

    // Derived class object
    Ferarri f1(100, 500, "Pirelli", "Ferrari", 100000);

    // Using derived class methods
    cout << "Fuel capacity: " << f1.getfuel() << endl;
    f1.travel_cost();
    f1.price_car();
    f1.brand_tire();

    //demonstrating pointers to derived types
    Car *p;
    Ferarri f2(100,500,"Nexen","F80",10000);

    p = &f2;

    cout << "Memory location of derived class " << p <<endl; ;

    Car Truck("Fuso",4000);
    Ferarri *f;

    f = &Truck; //expect an error to occur

    cout << "Memory location of base object through derived class : " << f <<endl;

    return 0;
}

