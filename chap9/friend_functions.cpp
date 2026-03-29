/*
It is possible to allow a nonmember function access to a private member
of a class by declaring it as a friend of the class.
To make a function a friend of a class, we include its prototype in the public section of
the class declaration and precede it with the friend keyword.
For example, in this fragment, frnd() is declared to be a friend of the class MyClass

class MyClass
   {

   public:
     friend void frnd(MyClass ob);

   }
A function can be a friend of more than one class.
The program below shows the use of a friend function to determine if the private
fields of MyClass have a common denominator.
*/

#include <iostream>
using namespace std;

class MyClass
{
    int a,b;
public:
    MyClass(int i, int j) {a=i;b=j;}
    friend int comDenom(MyClass x); //a friend function

};

//Notice that conDenom is not a member function of any class.
int comDenom(MyClass x)
{
    /*
    Because comDenom() is a friend of MyClass, it can
    directly access a and b
    */
    int max = x.a < x.b ? x.a : x.b;

    for (int i=2;i<=max;i++)
        if((x.a%i)==0 && (x.b%i)==0) return i;


    return 0;

}

int main()
{
    MyClass n(18,111);

    if (comDenom(n))
        cout << "Common denominator is " << comDenom(n) << "\n";
    else
        cout << "No common denominator.\n";

    return 0;
}
/*
Here the comDenom() function is not a member of MyClass.
However, it still has full access to the private members of MyClass.
Specifically, it can access x.a and x.b.
Also comDenom() is called normally, that is, not in conjunction with an object and the dot operator.

*/
