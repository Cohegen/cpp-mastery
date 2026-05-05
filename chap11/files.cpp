/*
In C++ a file is opened by linking it to a stream.
There are 3 types of streams e.g input, output and input/output.
To open an input stream, we must declare the stream to be of class ifstream.
To open an output stream,it must be declared as class ofstream.
A stream that will be performing both input and output operations must declared as class fstream.
for example in the code below:
    ifstream in; // input
    ofstream out; // output
    fstream both; // input and output

Once we have created a stream,one way to associate it with a file is by using open().
This function is a member of each of the three stream classes.
The three prototypes for each is shown here:
       void ifstream(const char *filename, ios::openmode mode = ios::in);
       void ofstream(const char *filename, ios::openmode mode = ios::out | ios:trunc);
       void fstream(const char *filename, ios::openmode mode = ios::in | ios::out);

Here, the filename is the name of the file, it can include a path specifier.
The value of mode determines how the file is opened.
It must be one or more of the values defined by opencode, which is an enumeration
defined by ios(through its base class ios_base).
The values are shown here:
     ios::app
     ios::ate
     ios::binary
     ios::in
     ios::out
     ios::trune

We can combine two or more of these values by Oring them together.


The ios::in value specifies that the file is capable of input.
The ios::out value specifies that the file is capable of output.

The ios::binary value causes a file to be opened in binary mode.
The ios:trunc value causes the contents of a preexisting file the same name to
be destroyed, and the file to be truncated to zero length.
When creating an output stream using ofstream,any preexisting file by that name
is automatically truncated.
*/

//write to file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("test"); //create and open a file called "test" for output
    if(!out)
    {
        cout << "Cannot open file.\n";
        return 1;
    }

    out << 10 << " " << 123.33 << "\n"; // output to the file
    out << "This is a short text file.";

    out.close(); // close the file
    return 0;
}
