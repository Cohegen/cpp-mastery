/*
This program converts feet to meters
*/
#include <iostream>
using namespace std;

int main()
{
    double f; //holds the length in feet
    double m; // holds the conversion to meters

    cout << "Enter the length in feet: ";
    cin>>f; //reads users input

    m = f/ 3.28; //convert to meters
    cout << f<< " feet is " << m << "meters.";

    return 0;

}
