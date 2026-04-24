#include <iostream>
#include <vector>
#include <set>
#include "setdup.h"

int main(){
    std::vector<int> v;
    std::set<int> s;

    input(v);
    removeDuplicates(v,s);

    std::cout<<"\nUnique elements:\n";
    displaySet(s);

    return 0;
}
