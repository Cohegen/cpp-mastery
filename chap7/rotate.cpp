/*
Although C++ provides two shift operators, it does not define a rotate operator.

A rotate is similar to a shift except that the bit shifted off one end is inserted
onto the other end.
There are both left and right rotations.
For example 10100000 rotated left one place is 0100 0001.
The same value rotated right one place is 0101 0000.

*/

#include <iostream>
using namespace std;

unsigned char rrotate(unsigned char val, int n);
unsigned char lrotate(unsigned char val, int n);
void show_binary(unsigned int u);

int main()
{
    unsigned char ch = 'T';

    cout << "Original value in binary:\n";
    show_binary(ch);

    cout << "\nRotating right 8 times:\n";
    for(int i = 0; i < 8; i++)
    {
        ch = rrotate(ch, 1);
        show_binary(ch);
    }

    cout << "\nRotating left 8 times:\n";
    for(int i = 0; i < 8; i++)
    {
        ch = lrotate(ch, 1);
        show_binary(ch);
    }

    return 0;
}

// Left rotate a byte n places
unsigned char lrotate(unsigned char val, int n)
{
    unsigned int t = val;

    for(int i = 0; i < n; i++)
    {
        t = t << 1;

        // If a bit shifts out, it appears in bit 8
        if(t & 256)
            t = t | 1;
    }

    return (unsigned char)(t & 0xFF);
}

// Right rotate a byte n places
unsigned char rrotate(unsigned char val, int n)
{
    unsigned int t = val;

    // move value 8 bits higher
    t = t << 8;

    for(int i = 0; i < n; i++)
    {
        t = t >> 1;

        // If a bit shifted out, it will be in bit 7
        if(t & 128)
            t = t | 32768;
    }

    // move result back to lower 8 bits
    t = t >> 8;

    return (unsigned char)(t & 0xFF);
}

// Display the bits within a byte
void show_binary(unsigned int u)
{
    for(int t = 128; t > 0; t = t / 2)
    {
        if(u & t)
            cout << "1";
        else
            cout << "0";
    }

    cout << "\n";
}
