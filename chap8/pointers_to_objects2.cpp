/*
When a pointer is incremented or decremented,it is increased or decreased in such a way that it will
point to the next element of its base type.
The same thing occurs when a pointer to an object is incremented or decremented:
the next object is pointed to.

*/

//Incrementing and decrementing an object pointer

#include <iostream>
using namespace std;

class P_example
{
    int num;

public:
    void set_num(int val) {num = val; }
    void show_num() {cout << num << "\n";}


};

int main()
{
    P_example ob[2],*p;

    ob[0].set_num(10); //access objects directly
    ob[1].set_num(20);

    p = &ob[0];//obtaining pointer to first element
    p->show_num(); //show value of ob[0] using pointer
    p++; //advance to next object
    p->show_num();//show value of ob[1] using pointer

    p--;//retreating to previous objects
    p->show_num(); //showing value of ob[0]

    return 0;
}
