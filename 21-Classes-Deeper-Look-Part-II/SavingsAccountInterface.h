#ifndef SAVINGACCOUNTINTERFACE_H
#define SAVINGACCOUNTINTERFACE_H

class SavingsAccountImplementation;

class SavingsAccountInterface
{
public:
    SavingsAccountInterface(double);
    double calculateMonthlyInterest();
    void modifyInterestRate(int);
    void setSavingsBalance(double);
    double getSavingsBalance() const;
    ~SavingsAccountInterface();

private:
    SavingsAccountImplementation *ptr;
};

#endif