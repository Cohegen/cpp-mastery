/*
In C++, all functions must be declared before they are used.
This is accomplished by use of a function prototype.
Prototypes specify three things about a function:
1.Its return type
2.The type of its parameters
3.The number of its parameters
Prototypes allow the compiler to perform three important operations:
1.They tell the compiler what type of code to generate when the function is called.
2.They allow C++ to find and report any illegal type conversions between the type arguments
used to call a function and the type definition of its parameters.
3.They allow the compiler to detect differences between the numbers of arguments used to call a
function and the number of parameters in the function.
*/

/*
This program uses a function prototype to
enforce strong type checking
*/
void sqrt_it(int *i); // prototype

int main()
{
    int x;

    x=10;

    sqrt_it(x); // Error! Type mismatch

    return 0;
}

void sqr_it(int *i)
{
    *i = *i * *i;
}

/*
this program won't run because prototype prevents parameter type mismatches.
Since sqr_it() is expecting a pointer but is called with an integer.
*/
