#include <iostream>
#include <iomanip>
using namespace std;

ostream& line(ostream&stream)
{
    stream << setw(19) << setfill('-');
    return stream;
}

int main()
{
    cout << "Hello" << line << "World!";
    return 0;
}
