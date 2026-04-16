#ifndef ARRAYSUM_H
#define ARRAYSUM_H
#include<iostream>
#include <ctime>
using namespace std;
class ArraySum
{
private:
    int* arr;
    int n;

public:
    void input();
    int recursiveSum(int n);
    int iterativeSum();
    void display();
    ~ArraySum();
};

#endif
