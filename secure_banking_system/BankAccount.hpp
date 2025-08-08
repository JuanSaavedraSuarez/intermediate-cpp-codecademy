#include <string>
#include <iostream>

using namespace std;

class BankAccount {
private: 
    string accountNumber;
    double balance;

public:
    BankAccount(string initialAccountNumber, double initialBalance);
    
    string getAccountNumber() const;
    
    double getBalance() const;
    
    void setAccountNumber(string newAccountNumber);
    
    void setBalance(double newBalance);
  
    class Transaction {
    public:
        bool deposit(BankAccount& account, double depositAmmount);
        
        bool withdraw(BankAccount& account, double withdrawalAmmount);
    };
};