/*
A fun file to test the mechanics of friend functions
*/
#include <iostream>
#include <cstring>
using namespace std;
class scientist
{
    string name;
    int age;
    string field;
public:
    scientist(string n,int a, string f){name=n;age=a;field=f;}
    friend void get_information(const scientist &sc);

};

void get_information(const scientist &sc)
    {

        cout << sc.name << ", " << sc.age << " ," << sc.field;

    }

int main()
{
    scientist sc("newton",25,"math");
    get_information(sc);


    return 0;
}
