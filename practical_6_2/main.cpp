#include "person.h"

int main(){
    int n;
    cout<<"Enter number of managers (dynamic): ";
    cin>>n;

    Manager* m=new Manager[n];

    for(int i=0;i<n;i++){
        string name,dept;
        int age,id;
        cout<<"\nEnter details for manager "<<i+1<<endl;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter employee id: ";
        cin>>id;
        cout<<"Enter department: ";
        cin>>dept;
        m[i]=Manager(name,age,id,dept);
    }

    cout<<"\n--- Dynamic Managers Data ---\n";
    for(int i=0;i<n;i++){
        cout<<"\nManager "<<i+1<<endl;
        m[i].displayManager();
    }

    int searchId;
    cout<<"\nEnter employee id to search: ";
    cin>>searchId;

    bool found=false;
    for(int i=0;i<n;i++){
        if(m[i].getId()==searchId){
            cout<<"\nManager Found:\n";
            m[i].displayManager();
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Manager not found\n";
    }

    int s;
    cout<<"\nEnter number of managers (static): ";
    cin>>s;

    Manager arr[100];

    for(int i=0;i<s;i++){
        string name,dept;
        int age,id;
        cout<<"\nEnter details for manager "<<i+1<<endl;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter employee id: ";
        cin>>id;
        cout<<"Enter department: ";
        cin>>dept;
        arr[i]=Manager(name,age,id,dept);
    }

    cout<<"\n--- Static Managers Data ---\n";
    for(int i=0;i<s;i++){
        cout<<"\nManager "<<i+1<<endl;
        arr[i].displayManager();
    }

    delete[] m;
    return 0;
}


