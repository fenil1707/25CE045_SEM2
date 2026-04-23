#include <iostream>
#include <algorithm>
#include "vectorrev.h"
using namespace std;

void input(vector<int>& v){
    int n,x;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
}

void reverseStd(vector<int>& v){
    reverse(v.begin(),v.end());
}

void reverseManual(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

void display(const vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

