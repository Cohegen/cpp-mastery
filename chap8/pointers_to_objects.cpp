/*
We can access an object directly or by using a pointer to that object.
To access a specific element of an object when using pointer to the object, you must use the arrow operator: ->.
To declare an object pointer ,we use the same declaration syntax that we would use to declare a
pointer for any other type of data.
The program below creates a simple class P_example, which defines an object of that class
called ob, and defines a pointer to an object of type P_example called p.
It then illustrates how to access ob directly and how to use a pointer to access it indirectly.
*/

#include <iostream>
using namespace std;

class P_example
{
    int num;
public:
    void set_num(int val) {num = val;}
    void show_num() {cout << num << "\n";}

};

int main()
{
    P_example ob, *p; //declaring an object and pointer to it

    ob.set_num(1); //calling functions directly on ob
    ob.show_num();

    p= &ob; //assigning p the address of ob
    p->set_num(20); //call functions through a pointer to ob
    p->show_num();

    return 0;
}
