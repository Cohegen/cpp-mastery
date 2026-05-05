#include <iostream>
#include <cstring>
using namespace std;


/*
This project tries to implement a simple
Smart Bank System
*/


#include <iostream>
using namespace std;

class Account
{
private:
    int balance;
    string password;

public:
    Account()
    {
        balance = 10000;
        password = "echolo";
    }

    bool checkpassword()
    {
        string pass;

        for(int i = 0; i < 5; i++)
        {
            cout << "Enter password: ";
            cin >> pass;

            if(pass == password)
            {
                cout << "Login successful!\n";
                return true;
            }
            else
            {
                cout << "Incorrect password. " << 4 - i << " attempts left\n";
            }
        }

        cout << "Too many failed attempts. Access denied.\n";
        return false;
    }

    int checkBalance()
    {
        return balance;
    }

    void deposit()
    {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Invalid amount.\n";
            return;
        }

        balance += amount;
        cout << "Money deposited successfully.\n";
    }

    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Invalid amount.\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient funds.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }
};

int main()
{
    Account acc1;

    cout << "Welcome to the Federal Bank Platform\n";
    cout << "Please login to proceed\n";

    if (!acc1.checkpassword())
        return 0; //  stops program if login fails

    int choice;

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            acc1.withdraw();
            break;

        case 2:
            acc1.deposit();
            break;

        case 3:
            cout << "Balance: " << acc1.checkBalance() << endl;
            break;

        case 4:
            cout << "Thank you for using our platform. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while(choice != 4);

    return 0;
}
