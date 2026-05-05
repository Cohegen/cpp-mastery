#include <iostream>
#include <cstring>
using namespace std;

class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle is starting"<<endl;
    }
};
class Car:public Vehicle
{
public:
    void drive()
    {
        cout << "Car is being driven"<<endl;
    }
};
class ElectricCar:public Car
{
public:
    void charge()
    {
        cout << "Please charge the car"<<endl;
    }
};

int main()
{
    ElectricCar c1;
    c1.start();
    c1.drive();
    c1.charge();
    return 0;
}
