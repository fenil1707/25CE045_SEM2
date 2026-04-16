#include "ArraySum.h"



void ArraySum::input()
{
    cout << "Enter size of array: ";
    cin >> n;

    arr = new int[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int ArraySum::recursiveSum(int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + recursiveSum(n - 1);
}

int ArraySum::iterativeSum()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void ArraySum::display()
{
    clock_t start1 = clock();
    int recSum = recursiveSum(n);
    clock_t end1 = clock();

    clock_t start2 = clock();
    int itrSum = iterativeSum();
    clock_t end2 = clock();

    double timeRec = double(end1 - start1) / CLOCKS_PER_SEC;
    double timeItr = double(end2 - start2) / CLOCKS_PER_SEC;

    cout << "\nRecursive Sum = " << recSum << endl;
    cout << "Iterative Sum = " << itrSum << endl;

    cout << "\nExecution Time (Recursive): " << timeRec << " seconds" << endl;
    cout << "Execution Time (Iterative): " << timeItr << " seconds" << endl;
}

ArraySum::~ArraySum()
{
    delete[] arr;
}

