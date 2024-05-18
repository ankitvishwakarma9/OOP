/*Define a class to represent a bank account. Include the following members:
Data members
1. Name of the depositor
2. Account number
3. Type of account
4. Balance amount in the account
Member functions
1. To assign initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance
Write a main program to test the program.*/


#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " successfully. New balance: " << balance << endl;
    }

    // Function to withdraw an amount after checking the balance
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn " << amount << " successfully. New balance: " << balance << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("John Doe", 123456789, "Savings", 5000.0);

    // Testing deposit function
    myAccount.deposit(1500.0);

    // Testing withdraw function
    myAccount.withdraw(1200.0);

    // Displaying account details
    myAccount.display();

    return 0;
}
