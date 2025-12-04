#ifndef SAVINGACCOUNTIMPLEMENTATION_H
#define SAVINGACCOUNTIMPLEMENTATION_H

class SavingsAccountImplementation
{

public:
    SavingsAccountImplementation(double balance)
        : savingsBalance(balance)
    {
    }
    double calculateMonthlyInterest()
    {
        double interest = savingsBalance * annualInterestRate / 12;

        this->savingsBalance += interest;

        return interest;
    }

    void modifyInterestRate(int newRate)
    {
        this->annualInterestRate = newRate;
    }

    void setSavingsBalance(double savingsBalance)
    {
        this->savingsBalance = savingsBalance;
    }

    double getSavingsBalance() const
    {
        return savingsBalance;
    }

private:
    static double annualInterestRate;
    double savingsBalance;
};

#endif