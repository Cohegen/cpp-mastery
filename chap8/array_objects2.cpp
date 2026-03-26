/*
Simple but minimal implementation of an array of objects;
*/
#include <iostream>
using namespace std;

class Student
{
    int age;
    char grade;

public:
    Student(int a,char g)
    {
        age=a;
        grade=g;
    }

    int get_age() {return age;}
    char get_grade() {return grade;}

};

int main()
{
    Student s[3] =
    {
    Student(17,'A'),
    Student(13,'B'),
    Student(12,'C')
    };
    cout <<"Age: "<< s[0].get_age();

    return 0;


}
