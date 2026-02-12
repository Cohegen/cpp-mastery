#include <iostream>

/*
A program that shows the difference between signed and unsigned integer.
*/

using namespace std;

int main()
{
    short int i; //a signed short integer usigned
    int j; // an unsigned short integer
    j = 60000;// j is within range of an unsigned short int i.e out of range of signed short int
    i = j;
    cout << i << " " << j;

    return 0;
}
