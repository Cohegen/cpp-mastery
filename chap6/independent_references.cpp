/*
C++ primarily supports call-by-reference parameter passing and for use as a function return type
it is possible to declare a stand-alone reference variable.
This is called an independent reference

An independent reference must point to some object.
Thus,an independent reference must be initialized when declared.
*/

//use an independent reference

#include <iostream>

using namespace std;

int main()
{
    int j,k;
    int &i =j; // independent reference

    j=10;

    cout << j << " " << i; //output 10 10

    k=121;
    i=k; //copies k's value into j, not k's address

    cout << "\n" << j; //output 121

    return 0;
}
