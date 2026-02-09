"""
## Data Types
In preceding programs we used data types int.
However,a variable of type int can hold only whole numbers.
What is we need to store values of different data types?
Fortunately C++ has several other data types.
For instance to allow numbers with fractional componetents, C++ defines two main flavors of floating point types i.e float and double.
To declare a variable of type double, we use the followiing statement:
```
double result;
```
Because the declared result has  a floating-point type, it can hold values such as 88.56,0.034 or -107.03
It is called double precision floating-point because it used twice the memory of float and provides much higher accuracy.
Double ranges approxiately between 10**-38 to 10**38.

The output of `sixth.cpp` is as follows:
```
Original value fo ivar: 100
Original value of dvar: 100

ivar after divsion : 33
dvar after division: 33.3333

```
We can see that dividing ivar by 3, a whole number division is performed and outcome is 33,the fractional component is lost.
However when dvar is divided by 3, the fractional component is preserved.

"""
