#include <iostream>
#include <fstream>
#include <cstring>
#include "file.h"
using namespace std;

void countFile(){
    ifstream file("input.txt");
    if(!file){
        cout<<"File not found\n";
        return;
    }
    char line[200];
    int chars=0,words=0,lines=0;
    while(file.getline(line,200)){
        lines++;
        int len=strlen(line);
        chars+=len;
        int inWord=0;
        for(int i=0;i<len;i++){
            if(line[i]!=' '&&line[i]!='\t'){
                if(!inWord){
                    words++;
                    inWord=1;
                }
            }else{
                inWord=0;
            }
        }
    }
    cout<<"Characters: "<<chars<<endl;
    cout<<"Words: "<<words<<endl;
    cout<<"Lines: "<<lines<<endl;
    file.close();
}

