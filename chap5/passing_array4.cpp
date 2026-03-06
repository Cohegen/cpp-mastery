/*
When an array is used as a function, argument its address is passed to'
a function.
This means that the code inside the function will be operating on, and
potentially altering the actual contents of the array used to call the
function.
*/

/*
A program that examines the function cube() which converts the vale of each element
in the array into its cubes.
To call cube(), pass the address of the array as the first argument and size of
array as the second
*/

//changing the contents of an array using a function

#include <iostream>
using namespace std;

void cube(int *n, int num);

int main()
{
    int i, nums[10];

    for(i=0; i<10; i++)
        nums[i] = i+1;

    cout << "Original contents: ";
    for(i=0; i<10; i++)
        cout << nums[i] << ' ';

    cout << endl;

    cube(nums, 10); // compute cubes

    cout << "Altered contents: ";
    for(i=0; i<10; i++)
        cout << nums[i] << ' ';

    return 0;
}

void cube(int *n, int num)
{
    for(int i=0; i<num; i++)
        n[i] = n[i] * n[i] * n[i];
}
