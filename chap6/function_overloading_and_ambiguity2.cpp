
//Another example of overloading ambiguity

#include <iostream>
using namespace std;

char myfunc(unsigned char ch);
char myfunc(char ch);

int main()
{
    cout << myfunc('c'); //this calls myfunc(char);
    cout << myfunc(88) << " "; //error ambigous

    return 0;

}

char myfunc(unsigned char ch)
{
    return ch-1;

}

char myfunc(char ch)
{
    return ch+1;
}

/*
The cause of ambiguity is that when myfunc is called the integer 88, the
compiler does not which function to call.
That is,should 88 be converted into a char or unsigned char?
Both are valid conversions.
*/
