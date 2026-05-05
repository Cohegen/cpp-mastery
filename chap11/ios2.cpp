#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::hex, ios::basefield);
cout << 200 << endl;

cout.setf(ios::oct, ios::basefield);
cout << 200 << endl;

    return 0;
}
