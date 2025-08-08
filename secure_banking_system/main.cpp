#include <cstdarg>
#include <initializer_list>
#include <iostream>
#include "Bank.hpp"

using namespace std;

void printAccountDetails(BankAccount* account) {
  cout << "Account " << account->getAccountNumber() 
    << " has current balance $" << account->getBalance() << endl;
}

int main() {
  Bank bank;

  bank.createAccount("1001", 5000);
  bank.createAccount("1002", 3000);
  bank.createAccount("1003", 2000);

  BankAccount* account1001 = bank.findAccount("1001");
  BankAccount* account1002 = bank.findAccount("1002");
  BankAccount* account1003 = bank.findAccount("1003");

  printAccountDetails(account1001);
  printAccountDetails(account1002);
  printAccountDetails(account1003);
  
  BankAccount::Transaction transaction;
  
  transaction.deposit(*account1001, 1000);
  transaction.withdraw(*account1002, 500);
  
  printAccountDetails(account1001);
  printAccountDetails(account1002);
  printAccountDetails(account1003);
  
  int result = bank.transferMoney("1001", "1002", 1000);
  
  printAccountDetails(account1001);
  printAccountDetails(account1002);
  printAccountDetails(account1003);
  
  return 0;
}
