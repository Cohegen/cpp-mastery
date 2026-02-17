/*
The general form of do-while loop is:

do {statement;} while(condition);

The do-while loop executes as long as the conditional expression
is true.

*/
//program that loops until the number 100 is entered

#include <iostream>
using namespace std;

int main()
{
    int num;

    do{
        cout << "Enter a number(100 to stop):";
        cin >> num;
    } while(num != 100);
    return 0;
}
