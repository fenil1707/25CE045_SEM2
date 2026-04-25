#include <iostream>
#include "account.h"

int main(){
    Savings s(101,1000,5);
    Current c(102,2000,500);

    int ch;
    do{
        std::cout<<"\n1.Deposit(Savings)\n2.Withdraw(Savings)\n3.Display(Savings)\n4.History(Savings)\n5.Undo(Savings)\n";
        std::cout<<"6.Deposit(Current)\n7.Withdraw(Current)\n8.Display(Current)\n9.History(Current)\n10.Undo(Current)\n11.Exit\n";
        std::cout<<"Enter choice: ";
        std::cin>>ch;

        float amt;

        switch(ch){
            case 1: std::cin>>amt; s.deposit(amt); break;
            case 2: std::cin>>amt; s.withdraw(amt); break;
            case 3: s.display(); break;
            case 4: s.showHistory(); break;
            case 5: s.undo(); break;
            case 6: std::cin>>amt; c.deposit(amt); break;
            case 7: std::cin>>amt; c.withdraw(amt); break;
            case 8: c.display(); break;
            case 9: c.showHistory(); break;
            case 10: c.undo(); break;
        }
    }while(ch!=11);

    return 0;
}

