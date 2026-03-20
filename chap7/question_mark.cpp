/*
The ?operator is often used to replace the if-else statements of this general form:

if(condition) var = expression1; else var =expression2

Here the value assigned to var depends upon the outcome of the condition controlling the if.
The ? is called a tenary operator because it requires three operands.
It takes the general form
Exp ? Exp 2: Exp 3;

where Exp1,Exp2 and Exp 3 are expressions.
The value of a ? expression is determined like this: Exp1 is evaluated.
If it is true, then Ex 2 is evaluated and becomes the value of the entire ? expression.
If Exp1 is false, then Exp3 is evaluated and its values becomes the value of
the expression.
Consider the example, which assigns absval the absolute value of val:
absval = val < 0 ? -val: val; //get absolute value of val

Here,absval will be assigned the value of val if val is zero or greater.
If val is negative , the absval will be assigned the negative of that value(which yields a positive value).

*/

/*
This program uses the ? operator to prevent a division by zero
*/

#include <iostream>
using namespace std;

int div_zero();

int main()
{
    int i,j,result;

    cout << "Enter dividend and divisor: ";
    cin >> i >> j;

    //this statement prevents a divide by zero error

    result = j ? i/j :div_zero();

    cout << "Result: " << result;


    return 0;
}




int div_zero()
{
    cout << "Cannot divide by zero.\n";
    return 0;
}
