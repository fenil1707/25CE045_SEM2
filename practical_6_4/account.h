#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class Account{
protected:
    int accNo;
    float balance;
    std::string history[100];
    int idx;
public:
    Account();
    Account(int a,float b);
    void deposit(float amt);
    void withdraw(float amt);
    void display();
    void showHistory();
    void undo();
};

class Savings:public Account{
    float rate;
public:
    Savings();
    Savings(int a,float b,float r);
    void display();
};

class Current:public Account{
    float limit;
public:
    Current();
    Current(int a,float b,float l);
    void withdraw(float amt);
    void display();
};

#endif

