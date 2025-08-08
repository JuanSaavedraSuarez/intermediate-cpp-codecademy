#include <vector>
#include "BankAccount.hpp"

class Bank {
private:
    vector<BankAccount> customerAccounts;

public:
    void createAccount(string initialAccountNumber, double initialBalance);
    
    BankAccount* findAccount(string targetAccountNumber);
    
    int transferMoney(string sourceAccount, string targetAccount, 
        double transferAmmount);
};