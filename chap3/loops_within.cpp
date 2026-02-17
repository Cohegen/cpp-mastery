/*
Often, the variable that controls a loop
is needed only for the purposes of the loop
and is not used elsewhere.
In this case it is possible to declare the variable inside the
initialization portion of the for.

*/
/*
A program that computes both summation and factorial of the
numbers 1 through 5.
It declares its loop control variable i inside the for
*/
#include <iostream>
using namespace std;

int main()
{
    int sum =0;
    int fact = 1;

    //compute the factorial of the numbers through 5
    for(int i =1; i <= 5;i++)
    {
        sum += i; // i is known throughput the loop
        fact *=i;

        cout <<"Sum is " << sum << "\n";
        cout << " Factorial is " << fact;

        return 0;
    }
}
