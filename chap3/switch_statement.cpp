/*
Switch provides for a multiway branch.
The general form of the switch statement is:
switch(expression)
{
   case constant1:
       statement sequence
       break;
   case constant2:
        statement sequence
        break;
    case constant 3:
          statement sequence
          break;


    default:
        statement sequence
}
The switch expression must evaluate to either a character
or an integer value.
The default statement sequence is performed if not
matches are found.
When a match is found, the statements associated with that case are
executed until the break is encountered or in a concluding
case or default statement until the end of the switch is reached.
*/

/*
A simple proverb generator that demonstrates the switch
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number from 1 to 3: ";
    cin >>num;

    switch(num)
    {
    case 1:
        cout << "A rolling stone gathers no moss.\n";
        break;
    case 2:
        cout << "A bird in hand is worth two in the bush.\n";
        break;
    case 3:
        cout << "A fool and his money are soon parted.\n";
        break;
    default:
        cout<< "You must enter either 1,2, or 3.\n";
    }
    return 0;
}
