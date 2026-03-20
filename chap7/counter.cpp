/*
A program that counts how many times a function
is called
*/
#include <iostream>
using namespace std;

void counter();

int main()
{
    counter();
    counter();
    counter();
    counter();

    return 0;
}

void counter()
{
    static int count = 0;

    count++;

    cout << "Count is: " << count << endl;
}
