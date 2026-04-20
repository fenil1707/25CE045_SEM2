#include "temp.h"

int main(){
    int n;
    cout<<"Enter number of temperatures (dynamic queue): ";
    cin>>n;

    Celsius* q=new Celsius[n];

    for(int i=0;i<n;i++){
        float x;
        cout<<"Enter Celsius "<<i+1<<": ";
        cin>>x;
        q[i]=Celsius(x);
    }

    cout<<"\nConverted to Fahrenheit:\n";
    for(int i=0;i<n;i++){
        Fahrenheit f=q[i];
        cout<<f.get()<<endl;
    }

    if(n>=2){
        if(q[0]==q[1]) cout<<"First two Celsius equal\n";
        else cout<<"First two Celsius not equal\n";
    }

    int m;
    cout<<"\nEnter number of temperatures (static array): ";
    cin>>m;

    Fahrenheit arr[100];

    for(int i=0;i<m;i++){
        float x;
        cout<<"Enter Fahrenheit "<<i+1<<": ";
        cin>>x;
        arr[i]=Fahrenheit(x);
    }

    cout<<"\nConverted to Celsius:\n";
    for(int i=0;i<m;i++){
        Celsius c=arr[i];
        cout<<c.get()<<endl;
    }

    if(m>=2){
        if(arr[0]==arr[1]) cout<<"First two Fahrenheit equal\n";
        else cout<<"First two Fahrenheit not equal\n";
    }

    delete[] q;
    return 0;
}

