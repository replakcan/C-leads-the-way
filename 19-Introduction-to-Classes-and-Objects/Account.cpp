#include <iostream>
using std::cout;
using std::endl;

#include "Account.h"

Account::Account(int balance)
{
    setAccBalance(balance);
}

void Account::setAccBalance(int balance)
{
    if (balance < 0)
    {
        cout << "Initial balance was invalid" << endl;
        accBalance = 0;
    }

    accBalance = balance;
}

int Account::getAccBalance()
{
    return accBalance;
}

void Account::credit(int amount)
{
    accBalance += amount;
}

int Account::debit(int amount)
{
    if (amount > accBalance)
    {
        printf("Debit amount exceeded account balance.\n");
        return 0;
    }
    else
    {
        accBalance -= amount;
        return amount;
    }
}