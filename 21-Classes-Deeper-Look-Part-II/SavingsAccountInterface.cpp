#include "SavingsAccountInterface.h"
#include "SavingsAccountImplementation.h"

double SavingsAccountImplementation::annualInterestRate = 0.0;

SavingsAccountInterface::SavingsAccountInterface(double balance)
    : ptr(new SavingsAccountImplementation(balance)) {}

double SavingsAccountInterface::calculateMonthlyInterest()
{
    return ptr->calculateMonthlyInterest();
}

void SavingsAccountInterface::modifyInterestRate(int newRate)
{
    ptr->modifyInterestRate(newRate);
}

void SavingsAccountInterface::setSavingsBalance(double savingsBalance)
{
    ptr->setSavingsBalance(savingsBalance);
}

double SavingsAccountInterface::getSavingsBalance() const
{
    return ptr->getSavingsBalance();
}

SavingsAccountInterface::~SavingsAccountInterface()
{
    delete ptr;
}