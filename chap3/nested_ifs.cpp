/*
A nested if is an if statement that is the target of another
if or else.
Nested ifs in C++ is that an else statement always refers to the
nearest if statement that is within the same block as the else
and not already associated with an else.

if (i){
    if(j) result = 1;
    if(k) result =2;
    else result = 3; //this else is associated with if(k)
}
else result = 4; // this else is associated with if(i)
*/
//magic number program :
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int magic; //magic number
    int guess; //user's guess

    magic = rand(); //get a random number

    cout << "Enter your guess: ";
    cin >> guess;
    if (guess == magic) {
        cout << "**Right **\n";
        cout << magic << "  is the magic number.\n";
    }else
    {
        cout << "...Sorry, you're wrong.";
        if(guess > magic) cout << " Your guess is too high.\n";
        else cout << "Your guess is too low.\n";
    }
    return 0;
}
