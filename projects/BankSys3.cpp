#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
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

    Account(int bal,string pass, string name)
    {
        balance = bal;
        password = pass;
        username = name;
    }

    //getters
    int getBalance() {return balance;}
    string getPassword() {return password;}
    string getName() {return username;}

    //Setters
    void setBalance(int baln) {balance=baln;}
    void  setPassword(string passw) {password=passw;}
    void setName(string uname) {username = uname;}


    bool checkPassword()
    {
        string pass;
        for(int i=0;i<5;i++)
        {
            cout << "Enter password: " ;
            cin >> pass;
            if(pass == password)
            {
                cout << "Correct password entered,you may proceeed\n";
                return true;
            }
            else
            {
                cout << "Invalid password entered!" << "you have " << 4-i << " attempts left" << endl;

            }
        }cout << "Too many attempts made shutting off account." << endl;
        return false;
    }

};

int main()
{
    Account acc[10] = {Account(10000,"ansod","Maria"), Account(20000, "qwerty","Antonio"),Account(250000,"echolo","Juan")};
    int acc_num;
    cout << "Enter number : ";
    cin >> acc_num;
    if(acc_num < 1 || acc_num > 10) {
    cout << "Invalid account number!" << endl;
    return 0;
}
    cout << "You username is : " << acc[acc_num-1].getName();

    return 0;
}
