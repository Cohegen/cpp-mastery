#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n,int a){name=n;age=a;}
    void display()
    {
        cout << "Name is: " << name << "\n" << "Age is: " << age<<endl;
    }
};

class Student : public Person
{
public:
    int ID;
    Student(string n,int a,int id):Person( n,a)
    {
        ID = id;
    }
    void showStudent()
    {
        cout << "Show student ID is: " << ID;
    }
};

int main()
{
    Student s1("Anthony",21,15566);
    s1.display();
    s1.showStudent();
}
