#include <iostream>
#include "merge.h"
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first sorted array: ";
    cin >> n;
    cout << "Enter size of second sorted array: ";
    cin >> m;

    int* arr1 = new int[n];
    int* arr2 = new int[m];
    int* merged = new int[n + m];

    cout << "Enter " << n << " sorted elements for array 1:\n";
    inputArray(arr1, n);

    cout << "Enter " << m << " sorted elements for array 2:\n";
    inputArray(arr2, m);

    mergeArrays(arr1, n, arr2, m, merged);

    cout << "\nMerged Sorted Array:\n";
    displayArray(merged, n + m);

    delete[] arr1;
    delete[] arr2;
    delete[] merged;

    return 0;
}

