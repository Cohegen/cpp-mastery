/*
Using friend functions to compare the marks
of two students
*/
#include <iostream>
#include <cstring>
using namespace std;
class Student
{

private:
    string name;
    int marks;
public:
    Student(string n,int m){name=n;marks=m;}
    friend void compare(const Student& s1,const Student& s2);
};
void compare(const Student& s1,const Student& s2)
{
    if(s1.marks >s2.marks)
    {
        cout << s1.name << " scored higher marks than " << s2.name;
    }
    else{
        cout << s2.name << " scored higher marks than " << s1.name;
    }
}

int main()
{

    Student s1("Rodion",80);
    Student s2("Sonya",89);
    compare(s1,s2);
    return 0;
}
