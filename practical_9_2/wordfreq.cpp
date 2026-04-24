#include <iostream>
#include <sstream>
#include "wordfreq.h"
using namespace std;

void readSentence(string& s){
    cout<<"Enter sentence: ";
    getline(cin,s);
}

void countWords(const string& s,map<string,int>& m){
    stringstream ss(s);
    string word;
    while(ss>>word){
        m[word]++;
    }
}

void display(const map<string,int>& m){
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
}

