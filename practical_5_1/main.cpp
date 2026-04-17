#include <iostream>
#include "wordfreq.h"
using namespace std;

int main() {
    string paragraph;

    cout << "Enter paragraph:\n";
    getline(cin, paragraph);

    processParagraph(paragraph);

    return 0;
}

