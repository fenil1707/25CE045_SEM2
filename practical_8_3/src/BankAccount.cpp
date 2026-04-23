#include <iostream>
#include "BankAccount.h"
using namespace std;

string logArr[100];
int idx=0;

BankAccount::BankAccount(){balance=0;}
BankAccount::BankAccount(float b){balance=b;}

void BankAccount::deposit(float amt){
    logArr[idx++]="Enter deposit";
    if(amt<=0) throw "Invalid deposit";
    balance+=amt;
    logArr[idx++]="Exit deposit";
}

void BankAccount::withdraw(float amt){
    logArr[idx++]="Enter withdraw";
    if(amt>balance) throw "Insufficient balance";
    balance-=amt;
    logArr[idx++]="Exit withdraw";
}

float BankAccount::getBalance(){
    return balance;
}

void process(BankAccount &acc){
    logArr[idx++]="Enter process";
    float d,w;
    cout<<"Enter deposit amount: ";
    cin>>d;
    acc.deposit(d);
    cout<<"Enter withdraw amount: ";
    cin>>w;
    acc.withdraw(w);
    logArr[idx++]="Exit process";
}

void runBank(){
    BankAccount acc(1000);
    logArr[idx++]="Start main";
    try{
        process(acc);
    }catch(const char* e){
        logArr[idx++]="Exception caught";
        cout<<e<<endl;
    }
    logArr[idx++]="End main";

    cout<<"\nBalance: "<<acc.getBalance()<<endl;

    cout<<"\nLogs:\n";
    for(int i=0;i<idx;i++){
        cout<<logArr[i]<<endl;
    }
}

