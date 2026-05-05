/*
Each stream has associated with it as set of format flags that
control the way information is formatted by a stream.
The ios class declared a bitmask enumeration called fmtflags
in which the following values are defined.
When the skipws flag is set, leading whitespace characters (space,tabs and newlines)
are discarded when performing input on a stream.
When the left flag is set, output is left-justified. When right is set, output is
right-justified.
When the internal flag is set, a numeric value is padded to fill a field by inserting spaces
between any sign or base character.
To set a flag, we use the setf() function.
This function is a member of ios.
its format is as shown below:
fmtflags setf(fmtflags flags);

The function returns the previous settings of the format flags and turns on
those flags specified by flags.
For example, to turn on the showbase flag we use this statement:
stream.setf(ios::showbase)
*/

#include <iostream>
using namespace std;

int main()
{
    //turn on showpos and scientific flags
    cout.setf(ios::scientific|ios::showpos);

    cout << 123 << " " << 123.23 << " ";

    return 0;
}
