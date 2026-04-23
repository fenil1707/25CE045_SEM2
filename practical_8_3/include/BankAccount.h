#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount
{
    public:
        BankAccount();
        BankAccount(float b);
        void deposit(float amt);
        void withdraw(float amt);
        float getBalance();

    private:
        float balance;
};

void runBank();

#endif
