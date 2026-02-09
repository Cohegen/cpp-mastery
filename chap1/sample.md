""""
## Introduction to C++ Programming
##1.Definition of terms
Source code is the human-readable form of a program which is stored in the text file.
Object code is the executable form of the program created by the compiler.


##2. Entering the Program
C++ programs are normally contained in files that use the file extention `.cpp`.
So it means you can call a C++ program file by any name, but it should use the `cpp` extension.

##3. Compiling the Program
The output from a C++ compilier is executable object code.
For window environment, the executble file will use the same name as the source file, but have the extension `.exe`.

##4. Run the program
After a C++ program has been compiled, it is ready to run.
When the executable is run, the program displays the following output.
"C++ is power programming".
* Note the code use is in  "first.cpp" file.

## 5. Dissection of first.cpp
The program begins with the following lines
```
/*This is a simple C++ program.
and it is called first.cpp
*/
```
These lines are a comment.
The contents of a comment are ignored by compiler meaning they aren't executed.
The purpose of a comment is to describe or explain the operation of  program to anyone reading its source code.
In C++ there are two types of comments namely:
   1.multiline comment- the one we have just used.Any statements or line of statements between the symbol /* i.e slash followed by an asterisk is ignored.

   2.single-line

The next line of code is:
```
#include <iostream>

```
C++ defines several headers, which contain information that is either necessary or useful to any program we write.
The program requires the header iostream, which supposrts the C++I/O system.
This header is provided by the compiler.
A Header is included in a program using the `#include` directive.

The next line is:
```
using namespace std;
```
This tells the compiler to use the std namespace.
A namespace creates a declarative region in which various program elements can be placed.
Elements declared in one namespace aare seperate from elements delared in another region.
The `using` statement informs the compiler that we want to sue the std namespace.

The next line shows:
```
int main()
```

All C++ programs are composed of one or more functions.
Every C++ function must have a name,and the only function that any C++ program must include is the one called `main()`.
The main() function is where program execution begins and commonly ends.
Technically speaking C++ program begins with a call to main() and in most cases ends when main() returns.
The opening curly brace on the line that follows main() marks the start of the main() function code.
The int that precedes main() specificies that the type of data returned by main.
Int stands for integer.

The next line in the program is:

```
cout << "C++ is power programming.";
```

This causes the message C++ is power programming to be displayed on the screen.
It accomplishes this by using the output operator <<.
The << operator causes whatever is on its right side to output to the device specified on its left side.
`cout` is a predefined identifier that stands for console output and generally refers to the computer's screen.

The next line is:
```
return 0;
```
This line terminates main() and causes it to return the value 0 to the calling process.
For many operating systems, a return value of 0 signifies that the programis terminating normally.
Other values indicate that the program is terminating because of some error.
`return` is one of C++'s keywords and it is used to return a value from a function.
""""
