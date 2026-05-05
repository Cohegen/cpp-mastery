//use setiosflags().

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios::showpos) <<
    setiosflags(ios::scientific)<<
    setiosflags(ios::showbase) <<
    123 << " " << 123.23;

    return 0;
}
