/*
The shift operator  >> and << moves bit in a variable to the right or
left as specified.
The general form of the right-shift operator is
variable >> num-bits

and the left-shift operator is
variable << num-bits.

The value of num-bits determines how many bit places the bits are shifted.
Each left-shit causes all bits within the specified variable to be shifted one
position and zero bit to be brought in on the right.
Each right-shift shifts all bits to the right one position and brings zero to the left.
However if the variable is a signed integer containing a negative value, then each right-shift brings in
1 on the left, which preserves the sign bit.
The shift operators work only with integral types such as int,char,long or short int.
They cannot be applied to floating-point values.

*/

//Example of bitshifting

#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main()
{
    int i = 1, t;

    // shift left
    for(t = 0; t < 8; t++)
    {
        show_binary(i);
        i = i << 1;
    }

    cout << "\n";

    // shift right
    for(t = 0; t < 8; t++)
    {
        i = i >> 1;
        show_binary(i);
    }

    return 0;
}

// display the bits within a byte
void show_binary(unsigned int u)
{
    int t;

    for(t = 128; t > 0; t = t / 2)
    {
        if(u & t)
            cout << "1";
        else
            cout << "0";
    }

    cout << "\n";
}
