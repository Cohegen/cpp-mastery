/*
A banking system which stores multiple users
*/
#include <iostream>
#include <cstring>
using namespace std;

class Account
{
    int balance;
    string password;
    string username;

public:

    Account()
    {
        balance = 0;
        password = "";
        username = "";
    }

    Account(string n , string p, int b)
    {
        username = n;
        balance = b;
        password = p;

    }

    //getters

    int getBalance() const { return balance; }
    string getPassword() const { return password; }
    string getUsername() const { return username; }

    void displayInfo()
    {
        cout << "Username is : "<< username << "\n" << " balance: " << balance;
    }
};

int main()
{
    Account acc[12] = { Account("tony", "papi",32),Account("sofia","mami",34),Account("maria","pueblo",29)};
    acc[0].getBalance();

    return 0;
}
