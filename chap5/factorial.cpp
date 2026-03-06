/*
Recursion is the process of a function calling itself.
A function that calls itself is said to be recursive

*/

/*
A program that uses the factr() function which computes the factorial
of an integer.
*/

#include <iostream>
using namespace std;

int factr(int n);
int fact(int n);

int main()
{
    //use recursive version
    cout << "4 factorial is " << factr(4);
    cout << "\n";

    //using iterative version
    cout << "4 factorial is " << fact(4);
    cout << "\n";

    return 0;

}

//recursive version
int factr(int n)
{
    int answer;

    if(n==1) return(1);
    answer = factr(n-1)*n;
    return (answer);
}

//iterative version
int fact(int n)
{
    int t, answer;

    answer =1;
    for(t=1;t<=n;t++) answer = answer*(t);
    return 0;

}
