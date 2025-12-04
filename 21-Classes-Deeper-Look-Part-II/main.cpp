#include <iostream>
using std::cout;
using std::endl;

#include "SavingsAccountInterface.h"
#include "IntegerSet.h"

int main()
{
    // SavingsAccountInterface *savingAcc1 = new SavingsAccountInterface(2000.00);

    // SavingsAccountInterface *savingAcc2 = new SavingsAccountInterface(3000.00);

    // cout << savingAcc1->calculateMonthlyInterest() << endl;
    // cout << savingAcc2->calculateMonthlyInterest() << endl;

    // savingAcc1->modifyInterestRate(3);

    // cout << savingAcc1->calculateMonthlyInterest() << endl;
    // cout << savingAcc2->calculateMonthlyInterest() << endl;

    // double balance = savingAcc1->getSavingsBalance();

    // cout << balance << endl;

    IntegerSet set1 = IntegerSet();

    set1.insertElement(25);
    set1.insertElement(32);
    set1.insertElement(69);
    set1.printSet();

    return 0;
}