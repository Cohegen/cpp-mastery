#include <iostream>
using namespace std;

int main()
{
    int a = 25;
    int b = 26;
    int c = 23;

    int result = (a++, b--, c++, a+b+c);
    cout << "Result is: " << result;
    return 0;
}
