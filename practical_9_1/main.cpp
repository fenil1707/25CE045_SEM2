#include <iostream>
#include "vectorrev.h"
using namespace std;

int main(){
    vector<int> v;

    input(v);

    cout<<"\nOriginal: ";
    display(v);

    reverseStd(v);
    cout<<"After std::reverse: ";
    display(v);

    reverseManual(v);
    cout<<"After manual reverse: ";
    display(v);

    return 0;
}

