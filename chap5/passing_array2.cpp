/*
This is the second way of declaring an array parameter is to specify it as an
unsized array in the program below:
*/

#include <iostream>
using namespace std;

void display(int num[]);

int main()
{
    int t[10],i;

    for(i=0;i<10;++i) t[i] = i;
    display(t); // pass array t to a function

    return 0;
}

void displat(int num[])
{
    int i;

    for(i=0;i<10;i++)cout << num[i] << ' ';

}
