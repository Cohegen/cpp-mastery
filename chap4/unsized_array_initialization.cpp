/*
When declaring an initialized array, it is possible to let C++
automatically determine the array's dimensions.
To do this, we do not specify a size for the array.
Instead, the compiler determines the size counting the
number of initializers and creating an array large enough to
hold them.
For example:
int nums[] = {1,2,3,4};
creates an array called nums that is four elements long that contains the
values 1,2,3 and 4.
Because no explicit size is specified, an array such as nums is called
and unsized array.
Unsized arrays initializations are not restricted to one-dimensional arrays.
For a multidimensional array, the leftmost dimension can be empty.
The other dimensions must be specified, however, so that the array
can be properly indexed.
Using unsized array intializations
*/
//unsized array

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1,2,3,4};
    int vectors[][2]= { 1, 1, 2, 4, 3, 9, 4, 16, 5, 25, 6, 36, 7, 49, 8, 64, 9, 81, 10, 100  };

    cout << "Nums array: " << sizeof(nums) ;
    cout << "\nMatrices array: " << sizeof(vectors);
    return 0;
}
