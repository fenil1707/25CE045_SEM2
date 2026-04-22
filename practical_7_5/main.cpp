#include "grade.h"

int main(){
    int n;
    cout<<"Enter number of students (dynamic): ";
    cin>>n;

    Grading** g=new Grading*[n];

    for(int i=0;i<n;i++){
        int type;
        float m;
        cout<<"\n1.Undergraduate 2.Postgraduate: ";
        cin>>type;
        cout<<"Enter marks: ";
        cin>>m;

        if(type==1) g[i]=new Undergraduate(m);
        else g[i]=new Postgraduate(m);
    }

    cout<<"\nGrades (dynamic):\n";
    for(int i=0;i<n;i++){
        cout<<g[i]->computeGrade()<<endl;
    }

    for(int i=0;i<n;i++) delete g[i];
    delete[] g;

    int s;
    cout<<"\nEnter number of students (static): ";
    cin>>s;

    Grading* arr[100];

    for(int i=0;i<s;i++){
        int type;
        float m;
        cout<<"\n1.Undergraduate 2.Postgraduate: ";
        cin>>type;
        cout<<"Enter marks: ";
        cin>>m;

        if(type==1) arr[i]=new Undergraduate(m);
        else arr[i]=new Postgraduate(m);
    }

    cout<<"\nGrades (static):\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]->computeGrade()<<endl;
    }

    for(int i=0;i<s;i++) delete arr[i];

    return 0;
}

