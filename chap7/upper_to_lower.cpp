/*
A program that demonstrates the & (AND operator) by turning any lowercase
letter into uppercase by resetting the sixth bit to 0
*/

//uppercase letters using bitwise AND

#include <iostream>
using namespace std;

int main()
{
    char ch;

    for(int i=0;i<10;i++)
    {
        ch = 'a' + i;
        cout << ch;

        //This statement turns off the 6th bit
        ch = ch & 223; //ch is now uppercase

        cout << ch << " ";
    }

    cout << "\n";

    return 0;
}
