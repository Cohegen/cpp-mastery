#include <iostream>
using namespace std;

void display(int num[10]);

int main()
{
    int t[10],i;

    for(i=0;i<10;++i) t[i] =i;

    display(t);//pass array t to a function
    return 0;
}

//print some members
void display(int num[10])
{
    int i;

    for(i=0;i<10;i++) cout << num[i] << ' ';
}

void display(int *num)
{
    int i;

    for(i=0;i<10;i++) cout << num[i] << ' ';

}
