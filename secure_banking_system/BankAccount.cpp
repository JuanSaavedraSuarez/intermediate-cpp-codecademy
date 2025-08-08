#include "BankAccount.hpp"
#include <ostream>

BankAccount::BankAccount(string initialAccountNumber, double initialBalance) :
accountNumber(initialAccountNumber), balance(initialBalance) {}


string BankAccount::getAccountNumber() const {
    return accountNumber;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setAccountNumber(string newAccountNumber) {
    accountNumber = newAccountNumber;
    return;
}

void BankAccount::setBalance(double newBalance) {
    balance = newBalance;
    return;
}

bool BankAccount::Transaction::deposit(BankAccount& account, double depositAmmount) {
    if (depositAmmount <= 0) {
        cout << "Invalid deposit ammount, must be greater than zero but is " 
            << depositAmmount << endl;

        return false;
    }
    else {
        account.setBalance(account.getBalance() + depositAmmount);
        cout << "Deposited $" << depositAmmount << " to account " 
            << account.getAccountNumber() << endl;

        cout << "New account balance is $" << account.getBalance() << endl; 

        return true;
    }
}

bool BankAccount::Transaction::withdraw(BankAccount& account, double withdrawalAmmount) {
    if (withdrawalAmmount <= 0) {
        cout << "Invalid withdrawal ammount, must be greater than zero but is " 
            << withdrawalAmmount << endl;
        return false;
    }
    else if (withdrawalAmmount > account.getBalance()) {
        cout << "Withdrawal ammount " << withdrawalAmmount 
            << " is greater than current balance in account "
            << account.getAccountNumber()
            << " current balance is $" 
            << account.getBalance() << endl;
        return false;
    }
    else {
        account.setBalance(account.getBalance() - withdrawalAmmount);
        cout << "Withdrew $" << withdrawalAmmount << " to account " 
            << account.getAccountNumber() << endl;
        
            cout << "New account balance is $" << account.getBalance() << endl;
        return true;
    }
}