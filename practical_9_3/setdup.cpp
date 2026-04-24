#include <iostream>
#include "setdup.h"

void input(std::vector<int>& v){
    int n,x;
    std::cout<<"Enter number of elements: ";
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>x;
        v.push_back(x);
    }
}

void removeDuplicates(const std::vector<int>& v,std::set<int>& s){
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
}

void displaySet(const std::set<int>& s){
    for(auto it=s.begin();it!=s.end();it++){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
}

