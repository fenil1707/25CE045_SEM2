#include <iostream>
#include "shape.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    Circle* c=new Circle[n];

    for(int i=0;i<n;i++){
        float r;
        cin>>r;
        c[i].setRadius(r);
    }

    for(int i=0;i<n;i++){
        cout<<c[i].area()<<endl;
    }

    delete[] c;
    return 0;
}

