""""
## Reading User input
In the preceding programs `second.cpp` and `third.cpp` we used variables that we declared and assigned in the program.
However,what if instead since dimensions of rectangles vary in length, instead of assigning those dimensions in the program.
We instead ask the user to provide size of length and size of width.

To enable the user to enter these data into the program from the keyboard, we use the operator `>>` .
This is the C++ input operator.
```
cin >> length;
```
`cin` is another predifined identifier.
It stands for console input and is automatically supplied by C++.
The sample run is:
```
Enter the length: 35
Enter the width: 10
The area is 350
```

In the lines:
```
cout<< "Enter the length: ";
cin >> length; // input the length
```
The cout statement prompts the user.
The cin statement reads the user's response, storing the value in length.
So the value entered by the user is put into the variable.
""""
