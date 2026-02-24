/*
A program that searches an array of 10 integers for duplicate values
*/
#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int arr[10] = {0,2,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
               {
                cout << arr[i] << " " ;
                break;
               }
        }
    }

    return 0;
}
