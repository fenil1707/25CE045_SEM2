#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
using namespace std;

class bank_account
{
private:
    char account_name[25];
    long long account_balance;
    long int account_num;

public:
    void ca();
    int w(long int);
    int d(long int);
    int cb(long int);
};

#endif

