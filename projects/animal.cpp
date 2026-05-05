#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Go sound" <<endl;
    }
};

class Dog:public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks"<<endl;
    }

};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows"<<endl;
    }
};

class Cow:public Animal
{
public:
    void sound() override
    {
        cout << "Cat moos" <<endl;
    }
};


int main()
{
    Dog d1;
    Cat c1;
    Cow cw1;

    Animal *s1 = &d1;
    s1->sound();

    Animal *s2 = &c1;
    s2->sound();

    Animal *s3 = &cw1;
    s3->sound();

    return 0;
}
