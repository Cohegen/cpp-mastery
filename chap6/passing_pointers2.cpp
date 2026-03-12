/*
Demonstrate the pointer version of swap()
*/
#include <iostream>
using namespace std;

//declare swap() using pointers.
void swap(int *x,int *y);

int main()
{
    int i,j;

    i = 10;
    j=20;

    cout << "Initial values of i and j: ";
    cout << i << ' ' << j << "\n";

    swap(&j,&i); // calling swap() with addresses of i and j

    cout << "Swapped values of i and j: " ;
    cout << i << ' ' << j << "\n";

    return 0;
}

void swap(int *x,int *y)
{
    int temp;

    temp = *x; //saving/moving the value stored in x to temp
    *x = *y; // putting the value stored in y into x
    *y = temp; // putting x into y
}
