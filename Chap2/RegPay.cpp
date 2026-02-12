/*
Program to compute the regular payments for a loan

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double principal;//original principal
    double IntRate;  //interest rate
    double PayPerYear;// number of payments per year
    double NumYears; // number of years
    double Payment; // the regular payment
    double numer,denom;
    double b,e; //base and exponent for call to pow()

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter interest rate: ";
    cin >> IntRate;

    cout << "Enter number of payments per year: ";
    cin >> PayPerYear;

    cout << "Enter number of years: ";
    cin >>NumYears;

    numer = IntRate * principal / PayPerYear;

    e = -(PayPerYear*NumYears);
    b = (IntRate / PayPerYear) + 1;
    denom = 1-pow(b,e);

    Payment = numer / denom;

    cout << "Payment is " << Payment;

    return 0;
}
