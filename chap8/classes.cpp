/*
A class is a template that defines the form of an object.
Objects are instances of a class.
So a class is essentially a set of plans that specify how to build an object.
A class is a logical abstraction.
It is not until an object of a class has been created that a physical representation
of that class exist in memory.

When we define a class, we declare the data that it contains and the code that operates on that data.

A class is created by use of the keyword class.
The general form of a simple declaration is:
   class class-name
   {
      private data and functions
      public:
      public data and functions

   }object-list;

Here class-name specifies the name of the class.
This name becomes a new type name that can be used to create objects of the class.
A class can contain private as well as public members.
By default, all items defined in a class are private.
This means that they can be accessed only be other members of their class, and not only by any other part of our program.
This is one way encapsulation is achieved, since we can tightly control access to certain items of data by keeping them private.

To make parts of a class public, we must declare them after the public keyword.
All variables or functions defined after the public specifier are accessible by other parts of our program
*/
