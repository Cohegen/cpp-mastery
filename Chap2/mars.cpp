/*
This program creates a program that answer the question of
how long would it take someone on mars to receive a signal from
earth.
*/
#include <iostream>
using namespace std;

int main()
{
    double lightspeed;
    float distance;
    double delay;
    double delay_in_min;
    double bidirectional_delay;

    distance = 34000000.0; // 34,000,000 miles
    lightspeed = 186000.0; // 186,000 per second


    delay= distance / lightspeed;
    bidirectional_delay = delay*2;
    cout << "Time delay when talking to  Mars: " << delay << " second.\n";
    delay_in_min= delay /60.0;

    cout << "This is " << delay_in_min << "minutes.";
    cout<<"The bidirectional delay is " << bidirectional_delay << "seconds.\n";

    return 0;


}
