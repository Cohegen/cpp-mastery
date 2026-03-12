//Return a reference to an array element

#include <iostream>
using namespace std;

double &change_it(int i); //return a reference

double vals[] = {1.1,2.2,3.3,4.4,5.5};

int main()
{
    int i;

    cout << "Here are the original values: ";
    for(i=0;i<5;i++)
        cout << vals[i] << ' ';
    cout << '\n';


    change_it(1) = 5298.23; //declare 2nd element
    change_it(3) = -98.8; //change 4th element

    cout << "Here are the changed values: ";
    for(i=0;i<5;i++)
        cout << vals[i] << ' ';
    cout << '\n';

    return 0;
}

double &change_it(int i)
{
    return vals[i]; //return a reference to the ith element
}

/*
This program changes the values of the second and fourth element in the vals array.

The change_it() function is declared as returning a reference to a double.
Specifically, it returns a reference to the element of vals that is specified by its parameter i
The reference returned by change_it() is then used in main() to assign a value to that element.
When returning a reference, we should be careful that the object being referred to does not go out of scope.
That is when returning by reference we should return global variable and not local variable
*/
