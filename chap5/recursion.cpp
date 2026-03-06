/*
Recursion is the process of a function calling itself.
A function that calls itself is said to be recursive.
*/

// Demonstrates recursion


#include <iostream>
using namespace std;

int factr(int n);   // recursive
int fact(int n);    // iterative

int main()
{
    // use recursive version
    cout << "4 factorial is " << factr(4);
    cout << '\n';

    // use iterative version
    cout << "4 factorial is " << fact(4);
    cout << '\n';

    return 0;
}

// recursive version
int factr(int n)
{
    if(n <= 1) return 1;
    return n * factr(n - 1);
}

// iterative version
int fact(int n)
{
    int answer = 1;

    for(int t = 1; t <= n; t++)
        answer *= t;

    return answer;
}
