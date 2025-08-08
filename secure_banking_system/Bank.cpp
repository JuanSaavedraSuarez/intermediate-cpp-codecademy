#include "Bank.hpp"
#include <chrono>
#include <iostream>
#include <ostream>
#include <string>

void Bank::createAccount(string initialAccountNumber, double initialBalance) {
    customerAccounts.push_back(BankAccount(initialAccountNumber, initialBalance));
    return;
}

BankAccount* Bank::findAccount(string targetAccountNumber) {
    for (int i =0; i < customerAccounts.size(); i++) {
        if (customerAccounts[i].getAccountNumber() == targetAccountNumber)
            return &customerAccounts[i];
    }
    return nullptr;
}

int Bank::transferMoney(string sourceAccount, string targetAccount,
    double transferAmmount) {
    BankAccount* source = findAccount(sourceAccount);
    BankAccount* target = findAccount(targetAccount);

    if (source == nullptr) {
        cout << "Source account " << sourceAccount << " not found" << endl;
        return 2;
    }
    if (target == nullptr) {
        cout << "Target account " << targetAccount << " not found" << endl;
        return 2;
    }

    if (source->getBalance() < transferAmmount) {
        cout << "Source account has insufficient funds" << endl;
        return 3;
    }
    else {
        BankAccount::Transaction withdrawTransaction, depositTransaction;
        
        withdrawTransaction.withdraw(*source, transferAmmount);
        depositTransaction.deposit(*target, transferAmmount);

        cout << "Succesfully transferred $" << transferAmmount << " from " 
            << sourceAccount << " to " << targetAccount << endl;

        cout << "New balance for account " << sourceAccount 
            << " is $" << source->getBalance() << endl;
        
        cout << "New balance for account " << targetAccount
            << " is $" << target->getBalance() << endl;

        return 1;
    }

}