#include <iostream>
using namespace std;

class Distance
{
    int metres;
    int centimeters;

public:
    Distance(int m, int cm)
    {
        metres = m;
        centimeters = cm;
    }

    void normalize()
    {
        metres += centimeters / 100;
        centimeters = centimeters % 100;
    }

    int getmeters() const { return metres; }
    int getcm() const { return centimeters; }

    friend void add(const Distance& ob1, const Distance& ob2);
};

void add(const Distance& ob1, const Distance& ob2)
{
    int total_meters = ob1.metres + ob2.metres;
    int total_cm = ob1.centimeters + ob2.centimeters;

    total_meters += total_cm / 100;
    total_cm = total_cm % 100;

    cout << "Total distance is: "
         << total_meters << "m "
         << total_cm << "cm" << endl;
}

int main()
{
    Distance c1(10, 1000);
    Distance c2(20, 2000);

    add(c1, c2);
}
