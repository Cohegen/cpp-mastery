/*
The complete form of an if statement is:
if(expression)statement;
    else statement;
where the targets of the if and else are single statements.
The else clause is optional.
Targets of if and else can also be blocks of statements.
The general form of the if using blocks of statements is:
if(expression)
{

    statement sequence
}else{

     statement sequence
}
if the conditional expression is true, the target of the if will
be executed, otherwise the target of else, if it exists,will be executed.
Note that at no time will both be executed.
*/

//magic number program
#include <iostream>
#include <cstdlib> // enables use to call rand() function which returns random numbert
using namespace std;

int main()
{
   int magic; //magic number
   int guess; // user's guess
   magic = rand(); //get a random number

   cout << "Enter your guess: ";
   cin >> guess;

   if (guess == magic)
    cout << "**Right**"; // if guess matches the magic number, message will be displayed

   return 0;
}
