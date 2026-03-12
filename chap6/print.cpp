/*
This program creates a collection of overloaded functions that outputs
various data types to the screen

It creates two sets of functions called println() and print().
The println() function displays argument followed by a newline.

The print() function will diplay its argument but does not append a newline
*/


#include <iostream>
using namespace std;

// ---------- Prototypes ----------
// Functions that output a newline
void println(bool b);
void println(int i);
void println(long i);
void println(char ch);
void println(char *str);
void println(double d);

// Functions that do NOT output a newline
void print(bool b);
void print(int i);
void print(long i);
void print(char ch);
void print(char *str);
void print(double d);

// ---------- Main ----------
int main()
{
    // Using println() for different types
    println(true);
    println(10);
    println("This is a test");
    println('x');
    println(99L);
    println(123.23);

    // Using print() for concatenated output
    print("Here are some values: ");
    print(false);
    print(' ');
    print(88);
    print(' ');
    print(100000L);
    print(' ');
    print(100.01);

    println("Done!");

    return 0;
}

// ---------- Implementations ----------

// println() implementations
void println(bool b)
{
    cout << (b ? "true" : "false") << "\n";
}

void println(int i)
{
    cout << i << "\n";
}

void println(long i)
{
    cout << i << "\n";
}

void println(char ch)
{
    cout << ch << "\n";
}

void println(char *str)
{
    cout << str << "\n";
}

void println(double d)
{
    cout << d << "\n";
}

// print() implementations
void print(bool b)
{
    cout << (b ? "true" : "false");
}

void print(int i)
{
    cout << i;
}

void print(long i)
{
    cout << i;
}

void print(char ch)
{
    cout << ch;
}

void print(char *str)
{
    cout << str;
}

void print(double d)
{
    cout << d;
}
