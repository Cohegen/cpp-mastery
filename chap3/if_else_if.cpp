/*
The if-else-if ladder looks like this:
if(condition)
    statement;
else if (condition)
     statement;
else if(condition)
    statement;

else
    statement;

the conditional expressions are evaluated from top
downward. As soon as a true condition is found,
the statement associated with it is executed,
and the rest of the ladder is bypassed.
If none of the conditions is true, then the
final else statement  will be executed.
*/
//Demonstrate an if-else-if ladder
#include <iostream>
using namespace std;

int main()
{
    int x;

    for (x=0;x<6;x++)
    {


        if(x==1) cout << "x is one\n";
        else if(x==2) cout << "x is two\n";
        else if (x==3) cout << "x is four\n";
        else cout << "x is not between 1 and 4\n";
    }
    return 0;
}
