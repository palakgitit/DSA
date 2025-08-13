#include <iostream>
#include <string>
using namespace std;

// Base Class
class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int AccoutNo, string name, double bal = 0)  
        : accountNumber(AccoutNo), accountHolderName(name), balance(bal)
    {}

    virtual void deposit(double amount) 
    {
        balance += amount;
        cout << "Deposited: " << amount << " New Balance: " << balance << endl;
    }

    virtual void withdraw(double amount) 
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << " New Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    double getBalance() const { return balance; }

    virtual void displayAccountInfo() const
    {
        cout << "Account Number: " << accountNumber << endl
             << "Account Holder: " << accountHolderName << endl
             << "Balance: " << balance << endl;
    }

    virtual void calculateInterest()
    {
        
    }
};

// Derived Class

class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(int AccoutNo, string name, double bal, double rate) 
        : BankAccount(AccoutNo, name, bal), interestRate(rate)
    {
    }

    void calculateInterest()
    {
        double interest = balance * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }
};

// Derived Class

class CheckingAccount : public BankAccount
{
    double overdraftLimit;

public:
    CheckingAccount(int AccoutNo, string name, double bal, double limit) 
        : BankAccount(AccoutNo, name, bal), overdraftLimit(limit) {}

    void withdraw(double amount)
    {
        if (amount <= balance + overdraftLimit)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << " New Balance: " << balance << endl;
        }
        else
        {
            cout << "Overdraft limit exceeded!" << endl;
        }
    }
};

// Derived Class

class FixedDepositAccount : public BankAccount 
{
    int duration;
    double interestRate;

public:
    FixedDepositAccount(int AccoutNo, string name, double bal, int dur, double rate) 
        : BankAccount(AccoutNo, name, bal), duration(dur), interestRate(rate) {}

    void calculateInterest() 
    {
        double interest = balance * interestRate * duration / (12 * 100);
        cout << "FD Interest: " << interest << endl;
    }
};

// Main Menu
int main()
{
    SavingsAccount SavingAcc(71010, "shri", 10000, 4); 
    CheckingAccount CheckingAcc(71012, "Lata", 2000, 1000);
    FixedDepositAccount FixAcc(71013, "Jennie", 135000, 3, 4);

    BankAccount *Accounts[] = {&SavingAcc, &CheckingAcc, &FixAcc}; // Array 
    int choice, AccountType; 
    double amount; // Variable to store 

    do
    {
        cout << "----| Banking Menu |---- " << endl;
        cout << "1. Deposit " << endl
             << "2. Withdraw " << endl
             << "3. Display Info" << endl
             << "4. Calculate Interest" << endl
             << "0. Exit " << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0)
            break;

        cout << "Select Account Type (0: Savings, 1: Checking, 2: Fixed Deposit): ";
        cin >> AccountType;

        switch (choice)
        {
        case 1:

        cout << "Enter amount to Deposit: ";
        cin >> amount;
        Accounts[AccountType]->deposit(amount);
        break;

        case 2:

        cout << "Enter amount to Withdraw: ";
        cin >> amount;
        Accounts[AccountType]->withdraw(amount);
        break;

        case 3:

        Accounts[AccountType]->displayAccountInfo();
        break;

        case 4:

        Accounts[AccountType]->calculateInterest();
        break;

        default:
        cout << "Invalid choice!" << endl;
        }
    } while(choice!=0);

    return 0;
}