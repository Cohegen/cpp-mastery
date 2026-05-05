#include <iostream>
using namespace std;

class Employee
{
public:
    Employee()
    {
        cout << "Employee constructor " <<endl;
    }
    virtual double calculateSalary() =0;

    virtual ~Employee()
    {
        cout << "Employee destructor" <<endl;
    }

};

class Manager :public Employee
{
public:
    Manager():Employee()
    {
        cout << "Manager constructor " <<endl;
    }
    double calculateSalary() override
    {
        return 3400;
    }
};

class Developer:public Employee
{
public:

    Developer():Employee()
    {
        cout << "Developer constructor "<<endl;
    }
    double calculateSalary() override
    {
        return 1800;
    }

};

int main()
{


    Employee *e[4] =
    {
        new Developer(),
        new Manager(),
        new Developer(),
        new Manager()
    };

    for(int i =0;i<4;i++)
    {
        cout << e[i]->calculateSalary();
    }

    for(int i=0;i<4;i++)
    {
        delete e[i];
    }

    return 0;
}
