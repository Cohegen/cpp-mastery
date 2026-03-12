/*
Even though C++'s default passing convention by call-by-value, it is possible to
manually create a call-by-reference by passing the address of an argument(i.e a pointer) to a function.
Which enables us to change the value of the argument outside of the function.
*/

//Exchange the values of the variables pointed to by x and y
void swap(int *x,int *y)
{
    int temp;

    temp = *x;// save the value at address x (dereferencing)
    *x = *y; // putting y into x
    *y = temp // putting x into y
}

/*
The swap() function declares two pointer parameters, x and y.
It uses these parameters to exchange the values of the variables pointed to by the arguments
passed to the function.
Remember, *x and *y refer to the variables pointed to by x and y.
Thus the statement
*x = *y;
puts the value of the object pointed to by y into the object pointed to by x.
When the function terminates,the terminates,the contents of the variables used to call the function will be swapped.
Since swap() expects to receive two pointers, we must call swap() with the address of the variables
we want to exchange.
*/
