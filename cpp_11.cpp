// Create cpp application for bank account handling.
// Create a class BankAccount -- acct no(int),customer name(string),balance(double)
// Add constr. (2 constrs : first to accept all details )
// Add Business logic methods
// Methods
// public void withdraw(double amt) 
// public void deposit(double amt)
// Create object of account class and test withdraw and deposit methods.

#include <iostream>
#include <string>

class BankAccount {
private:
    int acctNo;
    std::string customerName;
    double balance;

public:
    // Constructor to accept all details
    BankAccount(int acctNo, std::string customerName, double balance) {
        this->acctNo = acctNo;
        this->customerName = customerName;
        this->balance = balance;
    }

    // Constructor with default balance
    BankAccount(int acctNo, std::string customerName) {
        this->acctNo = acctNo;
        this->customerName = customerName;
        this->balance = 0.0;
    }

    // Method to withdraw amount from the account
    void withdraw(double amt) {
        if (amt > balance) {
            std::cout << "Insufficient balance in the account.\n";
        } else {
            balance -= amt;
            std::cout << "Withdrawn amount: " << amt << std::endl;
            std::cout << "New balance: " << balance << std::endl;
        }
    }

    // Method to deposit amount to the account
    void deposit(double amt) {
        balance += amt;
        std::cout << "Deposited amount: " << amt << std::endl;
        std::cout << "New balance: " << balance << std::endl;
    }
};

int main() {
    // Creating an object of BankAccount class
    BankAccount account(123456789, "John Doe", 5000.0);

    // Testing withdraw and deposit methods
    account.withdraw(2000.0);
    account.deposit(3000.0);

    return 0;
}
