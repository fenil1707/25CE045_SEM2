#include <iostream>
#include "wordfreq.h"
using namespace std;

int main(){
    string s;
    map<string,int> m;

    readSentence(s);
    countWords(s,m);

    cout<<"\nWord Frequency:\n";
    display(m);

    return 0;
}
