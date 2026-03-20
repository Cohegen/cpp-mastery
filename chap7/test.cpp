/*
This program declares a variable test and gives the value 100 and makes
sure that it can't be changed
*/

#include <iostream>
using namespace std;

int main()
{
    const int x = 100;
    cout << "X: " << x;
    x= 200;
    cout <<"X: " << x;


    return 0;
}
