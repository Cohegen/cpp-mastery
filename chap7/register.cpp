/*
The register modifier tells the compiler to store a variable in
such a way that it can be accessed as quickly as possible.
This means storing the variable either in a registers of the CPU or in cache memory.
Accessing the registers of the CPU or cache memory is fundementally faster than
accessing the main memory of the computer.
So the variable stored in a register will accessed much more quickly than if that
variable is stored in RAM.

*/

/*
A summation program that uses register variables to improve the performance of
the summation() function, which computes the summation of the values in an array.
This program assumes that only two variables will actually be optimized for speed
*/

#include <iostream>
using namespace std;

int summation(int nums[],int n);


int main()
{
    int vals[] = { 1,2,3,4,5};
    int result;

    result = summation(vals,5);

    cout << "Summation is " << result << "\n";

    return 0;
}


//returns summation of an array of ints
int summation(int nums[], int n)
{
    register int i;
    register int sum = 0;

    for(i=0;i<n;i++)
        sum = sum + nums[i];

    return sum;
}
