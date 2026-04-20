#include "calc.h"

int main(){
    Calculator c;

    int a,b;
    float x,y;

    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Result: "<<c.add(a,b)<<endl;

    cout<<"\nEnter two float numbers: ";
    cin>>x>>y;
    cout<<"Result: "<<c.add(x,y)<<endl;

    cout<<"\nEnter int and float: ";
    cin>>a>>x;
    cout<<"Result: "<<c.add(a,x)<<endl;

    cout<<"\nEnter float and int: ";
    cin>>y>>b;
    cout<<"Result: "<<c.add(y,b)<<endl;

    return 0;
}
