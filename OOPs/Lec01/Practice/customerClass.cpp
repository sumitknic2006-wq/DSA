#include<iostream>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    double accountBalance;
    bool isActive;

    public:
    // Method
    Customer(string custName, int accNumber, double initialBalance)
    {
        name = custName;
        accountNumber = accNumber;
        accountBalance = initialBalance;
        isActive = true;
    }

    // 1. Deposit Method: 
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            cout << "₹" << amount << " deposited successfully into Account " << accountNumber << "." << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // 2. Withdraw Method: 
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }
        
        if (accountBalance >= amount) {
            accountBalance -= amount;
            cout << "₹" << amount << " withdrawn successfully from Account " << accountNumber << "." << endl;
        } else {
            cout << "Transaction Failed: Insufficient funds in Account " << accountNumber << "!" << endl;
        }
    }

    // 3. Transfer Method: 
    void transfer(double amount, Customer &targetAccount) {
        if (amount <= 0) {
            cout << "Invalid transfer amount!" << endl;
            return;
        }

        if (accountBalance >= amount) {
            this->withdraw(amount);      
            targetAccount.deposit(amount); 
            cout << "Transfer of ₹" << amount << " to Account " << targetAccount.accountNumber << " completed successfully." << endl;
        } else {
            cout << "Transfer Failed: Insufficient funds for transfer!" << endl;
        }
    }

    void printDetails(){
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: "<<name<< endl;
        cout << "Account Number: "<<accountNumber<< endl;
        cout << "Account Balance"<<accountBalance<< endl;
        cout << "Status: " << (isActive ? "Active" : "Inactive") << endl;
    }

};

int main()
{
    Customer c1("Amit Sharma", 101, 5000.0); 
    Customer c2("Amit", 100, 4000.0); 

    c1.printDetails();
    c2.printDetails();

    c1.deposit(600.0);
    c1.withdraw(300.0);
    c1.transfer(400.0,c2);

}