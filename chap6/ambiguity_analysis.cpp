//More function overloading ambiguity
#include <iostream>
using namespace std;

int myfunc(int i);
int myfunc(int i,int j=1);

int main()
{
    cout << myfunc(4,5) << " "; //unambigious
    cout << myfunc(10); //error ambigious

    return 0;
}

int main()
{
    return i;
}
