#ifndef WORDFREQ_H
#define WORDFREQ_H
#include <map>
#include <string>
using namespace std;

void readSentence(string& s);
void countWords(const string& s,map<string,int>& m);
void display(const map<string,int>& m);

#endif

