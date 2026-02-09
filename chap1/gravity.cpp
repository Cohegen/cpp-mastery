#include <iostream>
using namespace std;

int main()
{
    int mass;
    float gravity_earth = 10;
    float moon_gravity;
    float weight_earth;
    float weight_moon;

    moon_gravity = 0.17 * gravity_earth;

    for (mass = 1; mass <= 100; mass++)
    {
        weight_earth = mass * gravity_earth;
        weight_moon = mass * moon_gravity;

        cout << "Mass: " << mass
             << "  Weight on Earth: " << weight_earth
             << "  Weight on Moon: " << weight_moon
             << "\n";
    }

    return 0;
}
