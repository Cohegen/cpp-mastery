/*
The XOR logical proposition says that given x and y, the are both true when they
are different and false when they are similar.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char msg[] = "This is a test";

    char key = 88;

    cout << "Original message: " << msg << "\n";

    // Encode
    for(int i = 0; i < strlen(msg); i++)
        msg[i] = msg[i] ^ key;

    cout << "Encoded message: " << msg << "\n";

    // Decode
    for(int i = 0; i < strlen(msg); i++)
        msg[i] = msg[i] ^ key;

    cout << "Decoded message: " << msg << "\n";
}
