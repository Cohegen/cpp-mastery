#include <iostream>
using namespace std;

int main()
{
   cout.setf(ios::right,ios::adjustfield);
   cout.width(10);
   cout.fill('-');
   cout << 42 <<endl;
   cout.precision(3);
   cout << fixed << 3.141592 <<endl;
    return 0;
}
