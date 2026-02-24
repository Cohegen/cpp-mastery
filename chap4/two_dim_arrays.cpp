/*
C++ allows multidimensional arrays.
The simplest form of the multidimensional array is the
two-dimensional array.
A two-dimensional array is a list of one-dimensional arrays.
To declare a two-dimensional integer array twoD of size 10,20, we write:
int twoD[10][20];
To access an element, specify the indices within their own
brackets.
For example,the point 3,5 of the array twoD , we would use twoD[3][5]

*/

#include <iostream>
using namespace std;

int main()
{
    int t,i,nums[3][4];

    for(t=0;t<3;++t){
        for(i=0;i<4;++i){
            nums[t][i] = (t*4) +i +1;
            cout << nums[t][i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
