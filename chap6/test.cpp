#include <iostream>
using namespace std;

// function prototype
int func(char &ch, int *i);

int main()
{
    char ch2 = 'B';
    int i2 = 10;

    cout << "Original variables: " << ch2 << "\n" << i2 << "\n";

    func(ch2, &i2); // pass char by reference, int by pointer

    return 0;
}

// function definition
int func(char &ch, int *i)
{
    ch = 'Z';    // update char
    *i = 20;     // update int

    cout << "Updated variables: " << ch << "\n" << *i << "\n";

    return 0;
}
