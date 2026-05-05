/*
I/O manipulator - these are tools that modify how data is
displayed or read without using .setf() or .width() directly
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << hex << 255 << endl;

    cout << setw(10) << setfill('*') << 42 <<endl;

    cout << fixed << setprecision(3) << 3.141592 << endl;

    cout << boolalpha << true <<endl;
    return 0;
}
