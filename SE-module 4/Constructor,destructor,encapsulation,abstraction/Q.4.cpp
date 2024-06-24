/*Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.*/

#include <iostream>
using namespace std;

class BankAccount 
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(const string& accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdraw" << amount << endl;
        } else {
            cout << "insufficient balance for withdrawal." << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
    string getAccountNumber() const {
        return accountNumber;
    }
};

int main() 
{
    BankAccount myAccount("123456789", 1000.0);

    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Initial Balance" << myAccount.getBalance() << endl;

    myAccount.deposit(500.0);
    cout << "Current Balance" << myAccount.getBalance() << endl;

    myAccount.withdraw(200.0);
    cout << "Current Balance" << myAccount.getBalance() << endl;

    myAccount.withdraw(1500.0);
    cout << "Current Balance" << myAccount.getBalance() << endl;

    return 0;
}

