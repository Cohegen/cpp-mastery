#include <iostream>
#include <iomanip>
using namespace std;

ostream& logger(ostream& stream)
{
    stream << "[TIME] ";
    return stream;
}

int main()
{
    cout << logger << "ID: 42 | Value: "
         << fixed << setprecision(2) << 3.14243 << endl;
    cout << logger << "ID:21 | Value: " << fixed <<setprecision(2) << 1.45566<<endl;

    return 0;
}
