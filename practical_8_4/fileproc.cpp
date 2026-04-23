#include <iostream>
#include <fstream>
#include <sstream>
#include "fileproc.h"
using namespace std;

void processFile(){
    string path;
    ifstream file;

    while(true){
        cout<<"Enter file path: ";
        cin>>path;
        file.open(path);
        if(file) break;
        cout<<"Cannot open file\n";
        file.clear();
    }

    string line;
    int lineNo=0;

    while(getline(file,line)){
        lineNo++;
        stringstream ss(line);
        float num,sum=0;
        int count=0;
        bool valid=true;

        while(ss>>num){
            sum+=num;
            count++;
        }

        if(!ss.eof()) valid=false;

        if(valid && count>0){
            cout<<"Line "<<lineNo<<" Sum: "<<sum<<" Avg: "<<sum/count<<endl;
        }else{
            cout<<"Line "<<lineNo<<" Invalid data\n";
        }
    }

    file.close();
}

