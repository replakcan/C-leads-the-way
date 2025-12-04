class Account
{
public:
    Account(int);
    int getAccBalance();
    void setAccBalance(int);
    void credit(int);
    int debit(int);

private:
    int accBalance;
};