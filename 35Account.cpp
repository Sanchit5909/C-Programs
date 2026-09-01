#include <iostream>
using namespace std;

// Savings Account
class SavingAccount
{
    string name;
    int accNo;
    double balance;

public:
    // Parameterized Constructor
    SavingAccount(string n, int a, double b)
    {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display()
    {
        cout << "\nSavings Account" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Checking Account
class CheckingAccount
{
    string name;
    int accNo;
    double balance;

public:
    // Parameterized Constructor
    CheckingAccount(string n, int a, double b)
    {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display()
    {
        cout << "\nChecking Account" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    SavingAccount s("Alice", 1001, 5000);
    CheckingAccount c("Bob", 1002, 3000);

    s.deposit(1000);
    s.withdraw(2000);
    s.display();

    c.deposit(1500);
    c.withdraw(1000);
    c.display();

    return 0;
}