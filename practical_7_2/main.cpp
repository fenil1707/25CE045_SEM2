#include "complex.h"

int main(){
    int n;
    cout<<"Enter number of complex numbers (dynamic): ";
    cin>>n;

    Complex* arr=new Complex[n];

    for(int i=0;i<n;i++){
        float r,i2;
        cout<<"\nEnter real and imaginary part "<<i+1<<": ";
        cin>>r>>i2;
        arr[i]=Complex(r,i2);
    }

    cout<<"\nAddition of first two:\n";
    Complex sum=arr[0]+arr[1];
    sum.display();

    cout<<"\nSubtraction of first two:\n";
    Complex diff=arr[0]-arr[1];
    diff.display();

    int m;
    cout<<"\nEnter number of complex numbers (static): ";
    cin>>m;

    Complex arr2[100];

    for(int i=0;i<m;i++){
        float r,i2;
        cout<<"\nEnter real and imaginary part "<<i+1<<": ";
        cin>>r>>i2;
        arr2[i]=Complex(r,i2);
    }

    cout<<"\nAddition of first two:\n";
    Complex s2=arr2[0]+arr2[1];
    s2.display();

    cout<<"\nSubtraction of first two:\n";
    Complex d2=arr2[0]-arr2[1];
    d2.display();

    delete[] arr;
    return 0;
}

