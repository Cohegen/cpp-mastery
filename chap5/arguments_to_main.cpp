/*
A command-line argument is the information that follows the program's
name on the command line of the operating system.

The argc parameter is an integer that holds the number of argument on the command line.
The argv parameter is a pointer that to an array of character pointers.
*/

//display command-line arguments

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    for(int i=0;i<argc;i++)\
    {
        cout << argv[i] << "\n";
    }

    return 0;
}
