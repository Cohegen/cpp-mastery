//using a const pointer parameter

#include <iostream>
using namespace std;

int negate( const int *val);

int main()
{
    int result;
    int v = 10;

    result = negate(&v);

    cout << v << "negate is " << result;
    cout << "\n";

    return 0;
}

int negate(const int *val)
{
    return - *val;
}
