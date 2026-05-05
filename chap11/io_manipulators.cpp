/*
Demonstrating an I/O manipulator

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setprecision(2) << 1000.243 << endl;
    cout.fill('*');
    cout << setw(20) << "Hello there.";


    return 0;
}

/*
The manipulators occur in the chain of I/O operations.
We can see that when a manipulator does not take an argument, such as
endl in the example, it is not followed by a parentheses.
*/
