/*
Relational refers to the relationships that can have
with one another and logical refers to ways which true and false
values can be connected together.
In C++ the outcome of a relational or logic expression produces a bool
result i.e the outcome of a relational or logical expression is either
true or false.
*/
//program to demonstrate the relational and logical operators
#include <iostream>
using namespace std;

int main()
{
    int i,j;
    bool b1,b2;

    i = 10;
    j=11;
    if(i<j) cout << "i < j\n";
    if(i<=j) cout << "i <= j\n";
    if(i != j) cout << " i != j\n";
    if(i == j) cout << " this won't execute\n";
    if ( i >= j) cout << " this won't execute\n";
    if (i > j) cout << "this won't execute\n";

    b1 = true;
    b2 = false;
    if(b1 && b2) cout << "this won't execute\n";
    if(!(b1&&b2)) cout << "!(b1 && b2) is true\n";
    if(b1|| b2) cout << "b1 || b2 is true\n";

    return 0;
}
