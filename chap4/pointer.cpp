/*
A pointer is an object that contains a memory address.
This address is the location of another object such as a variable.
For example if x contains address of y, then x is said to "point to y".

Pointer variable declaration takes a general form of:
    type *var-name:

Here,type is the pointer's base type.
The base type determines what type of data the pointer will be
pointing to. var-name is the name of the pointer variable.
For example, to declare ip to be a pointer to an int,
we use this declaration

int *ip
Since the base type of ip is int, it  can be used to point to int values.
Here a float pointer is declared as:
    float *fp
In this case, the base type of fp is float, which means that it can be used to
point to a float value.

There are two special operators that are used in with pointers i.e * and &.
The & is unary operator that returns the memory address of its operand.
For example:
ptr = &total
puts into ptr the memory address of the variable total.
This address is the location of total in the computer's internal memory.

The second operator is *, and it is the complement of &.
It is a unary operator that returns the value of the variable located
at the address specified by its operand.
If ptr contains the memory address of the variable total, then:
val = *ptr
will place the value of total into val.
For example, if total originally had the value 3200, then val will have the value 3200
because that is the value stored at location 100(address of total), the memory address
that was assigned to ptr.
*/

#include <iostream>
using namespace std;

int main()
{
    int total;
    int *ptr;
    int val;
    total = 3200; //assigning 3,200 to total
    ptr = &total; //get address of total
    val = *ptr; // get value at that address
    cout << "Address of total is : " << ptr;
    cout << "\nTotal is: " << val;
    return 0;
}
