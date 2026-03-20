#include <iostream>
using namespace std;

int main()
{
    enum Day {Monday,Tuesday,Wednesday,Friday,Sunday};

    Day today = Friday;

    cout << "Day number of today: " << today;

    return 0;
}
