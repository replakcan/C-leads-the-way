class Account
{
public:
    Account(int balance);
    int getAccBalance();
    void setAccBalance(int balance);
    void credit(int amount);
    int debit(int amount);

private:
    int accBalance;
};