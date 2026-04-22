#include "shape.h"

int main(){
    int n;
    cout<<"Enter number of shapes (dynamic): ";
    cin>>n;

    Shape** s=new Shape*[n];

    for(int i=0;i<n;i++){
        int ch;
        cout<<"\n1.Rectangle 2.Circle: ";
        cin>>ch;
        if(ch==1){
            float l,w;
            cout<<"Enter length and width: ";
            cin>>l>>w;
            s[i]=new Rectangle(l,w);
        }else{
            float r;
            cout<<"Enter radius: ";
            cin>>r;
            s[i]=new Circle(r);
        }
    }

    cout<<"\nAreas (dynamic):\n";
    for(int i=0;i<n;i++){
        cout<<s[i]->area()<<endl;
    }

    for(int i=0;i<n;i++) delete s[i];
    delete[] s;

    int m;
    cout<<"\nEnter number of shapes (static): ";
    cin>>m;

    Shape* arr[100];

    for(int i=0;i<m;i++){
        int ch;
        cout<<"\n1.Rectangle 2.Circle: ";
        cin>>ch;
        if(ch==1){
            float l,w;
            cout<<"Enter length and width: ";
            cin>>l>>w;
            arr[i]=new Rectangle(l,w);
        }else{
            float r;
            cout<<"Enter radius: ";
            cin>>r;
            arr[i]=new Circle(r);
        }
    }

    cout<<"\nAreas (static):\n";
    for(int i=0;i<m;i++){
        cout<<arr[i]->area()<<endl;
    }

    for(int i=0;i<m;i++) delete arr[i];

    return 0;
}

