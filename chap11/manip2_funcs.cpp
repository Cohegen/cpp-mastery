/*
All parameterless input manipulator functions have this skeleton:

istream &manip_name(istream &stream)
{
 //your code here
 return stream;
}
*/

/*
The program below creates the prompt() manipulatro.
It displays a prompting message and then configures input
to accept hexadecimal
*/

#include <iostream>
#include <iomanip>
using namespace std;

istream &prompt(istream &stream)
{
    cin >> hex;
    cout << "Enter number using hex format: ";
    return stream;

}

int main()
{
    int i;

    cin >> prompt >> i;
    cout << i;

    return 0;
}
