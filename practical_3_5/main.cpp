
#include <iostream>
#include "SuperDigit.h"
using namespace std;

int main() {
    string n;
    int k;
    cin >> n >> k;

    long long sum = 0;

    for (char c : n) {
        sum += c - '0';
    }

    cout << superDigit(sum * k);

    return 0;
}
