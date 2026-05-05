#include <iostream>
#include <iomanip>
using namespace std;

ostream & info(ostream & stream)
{
    stream << "[INFO]";
    return stream;
}

int main()
{
    cout << info << "Server started" <<endl;
    return 0;
}
