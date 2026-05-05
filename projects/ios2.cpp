#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::hex, ios::basefield);
    cout.width(10);
    cout.fill('-');
    cout << 1234 << endl;

    cout.setf(ios::dec, ios::basefield);
    cout.width(10);
    cout.fill('-');
    cout << 1234;   // same number, different format now

    return 0;
}
