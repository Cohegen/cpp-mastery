/*
By default, when a value is output, it occupies only as much space as the
number of characters it takes to display it.
We can specify a minimum field width by using the width() function.
It prototype is shown here:
streamsize width(streamsize w);

Here w becomes the field width, and previous field width is returned.

After you set a minimum field width, when a value uses less than the specified width,
the field will be padded with the current character fill (pace, by default) to reach the field width.

If the size of the value exceeds the minimum field width, then the field will be overrun and
no values are truncated.

When outputting floating-point values in scientific notation, you can determine the number of
digits to be displayed after the decimal point by using the precision() function.
streamsize precision(streamsize p);

Here the precision is set to p, and the old value is returned.
The default precision is 6.

By default, when a field needs to be filled, it is filled with spaces.
You can specify the fill character by using the fill() function.
Its prototype is
char fill(char ch)

After a call to fill(), ch becomes the new fill character, and the old one is returned.

*/

/*
A program that demonstrates width(),precision() and fill()
*/

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::showpos);
    cout.setf(ios::scientific);
    cout << 123 << " " << 123.33 << "\n";

    cout.precision(2); //two digits after decimal point
    cout.width(10); // in a field of 10 characters
    cout << 123 << " ";
    cout.width(10); // set width to 10
    cout << 123.33 << "\n";

    cout.fill('#'); //fill using #
    cout.width(10); // in a field of 10 characters
    cout << 123 << " ";
    cout.width(10); //set width to 10
    cout << 123.33;

    return 0;
}
