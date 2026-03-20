#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter any number";
    cin >> x;

    int result = (x > 5) ? 100 :-10;

    cout << "Result is : " << result;


    return 0;
}
