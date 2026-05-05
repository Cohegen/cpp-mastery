/*
There are two types of manipulators functions: those that take arguments
and those that don't.

All parameterless manipulators output functions have this skeleton:
ostream & manip_name(ostream &stream)
{

  // our code here
  return stream;
}

manip_name is the name of the manipulator.

*/

/*
Creating a manipulator that turns on left justification, sets the
field width to 10 and specifies that the dollar sign will be the fill character.
*/

#include <iostream>
#include <iomanip>
using namespace std;

ostream &setup(ostream &stream)
{
    stream.setf(ios::left);
    stream<< setw(10) << setfill('$');
    return stream;
}

int main()
{
    cout << 10 << " " << setup << 10;
    return 0;
}
