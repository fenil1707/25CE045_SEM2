#ifndef ONLINE_PAYMENT_H
#define ONLINE_PAYMENT_H

#include <iostream>
using namespace std;

class online_payment
{
private:
    char wallet_name[25];
    long long wallet_balance;
    long int wallet_num;

public:
    void cw();
    int w(online_payment &, long int);
    int d(long int);
    int cb(long int);
    int wd(long int);
};

#endif



