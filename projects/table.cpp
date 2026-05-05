#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << left
         << setw(8) << "ID"
         << setw(10) << "Name"
         << setw(6) << "Marks" << endl;

    cout << setw(8) << 1
         << setw(10) << "Alice"
         << setw(6) << 85 << endl;

    cout << setw(8) << 2
         << setw(10) << "Bob"
         << setw(6) << 92 << endl;

    return 0;
}
