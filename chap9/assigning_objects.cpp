/*
If both object are of the same type (that is, both are objects of the same class), then one object can
be assigned to another.
When one object is assigned to another, a bitwise copy of the first object's data is assigned to the second.
Thus, after the assignment, the two objects will be identical, but separate.


*/

//Demonstrating object assignment

#include <iostream>
using namespace std;

class Test
{
    int a,b;
public:
    void setab(int i, int j) {a=i,b=j;}
    void showab()
    {
        cout << "a is " << a <<"\n";
        cout << "b is " << b << "\n";
    }
};

int main()
{
    Test ob1,ob2;

    ob1.setab(10,20);
    ob2.setab(0,0);

    cout << "ob1 before assignment: \n";
    ob1.showab();
    cout << "ob2 before assignment: \n";
    ob2.showab();
    cout << "\n";

    ob2 = ob1; //assigning ob1 to ob2

    cout << "ob1 after assignment: \n";
    ob1.showab();
    cout << "ob2 after assignment: \n";
    ob2.showab();
    cout << "\n";

    ob1.setab(-1,-1);//change ob1

    cout << "ob1 after changing ob1: \n";
    ob1.showab();
    cout << "ob2 after changing ob1: \n";
    ob2.showab();

    return 0;


}

/*
The assignment of one object to another creates two objects that contain the same values.
The two objects are otherwise still completely seperate.
Thus subsequent modification of one object's data has no effect on that of the other.
*/
