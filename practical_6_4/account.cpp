#include <iostream>
#include "account.h"

Account::Account(){accNo=0;balance=0;idx=0;}
Account::Account(int a,float b){accNo=a;balance=b;idx=0;}

void Account::deposit(float amt){
    balance+=amt;
    history[idx++]="Deposit "+std::to_string(amt);
}

void Account::withdraw(float amt){
    if(amt<=balance){
        balance-=amt;
        history[idx++]="Withdraw "+std::to_string(amt);
    }else{
        std::cout<<"Insufficient balance\n";
    }
}

void Account::display(){
    std::cout<<"Account No: "<<accNo<<std::endl;
    std::cout<<"Balance: "<<balance<<std::endl;
}

void Account::showHistory(){
    for(int i=0;i<idx;i++){
        std::cout<<history[i]<<std::endl;
    }
}

void Account::undo(){
    if(idx==0) return;
    std::string last=history[idx-1];
    idx--;
    float amt=std::stof(last.substr(last.find(" ")+1));
    if(last.find("Deposit")!=std::string::npos) balance-=amt;
    else balance+=amt;
}

Savings::Savings():Account(){rate=0;}
Savings::Savings(int a,float b,float r):Account(a,b){rate=r;}
void Savings::display(){
    Account::display();
    std::cout<<"Interest Rate: "<<rate<<std::endl;
}

Current::Current():Account(){limit=0;}
Current::Current(int a,float b,float l):Account(a,b){limit=l;}
void Current::withdraw(float amt){
    if(amt<=balance+limit){
        balance-=amt;
        history[idx++]="Withdraw "+std::to_string(amt);
    }else{
        std::cout<<"Overdraft limit exceeded\n";
    }
}
void Current::display(){
    Account::display();
    std::cout<<"Overdraft Limit: "<<limit<<std::endl;
}

