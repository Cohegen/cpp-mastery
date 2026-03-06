
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int a; //declare one variable
    cin >> a;

    cout << "Enter a second number: ";
    int b; // declare another variable
    cin >> b;

    cout << "Product: " << a*b << "\n";

    return 0;
}

/*
In this program a and b are not declared until just before they are needed.
*/
