#include <iostream>
using namespace std;

class Test
{
public:
    int x;
    Test(int i);
    ~Test();
};
Test::Test(int i)
{
    x=i;
}
Test::~Test()
{
    cout << "\nDestructor called";
}

int main()
{
    Test t1 = 16;

    cout << "Test is :" << t1.x;

    return 0;
}
