#include <iostream>
#include <map>
#include <vector>
#include "dir.h"

int main(){
    std::map<std::string,std::vector<std::string>> dir;
    int ch;

    do{
        std::cout<<"\n1.Add Folder\n2.Add File\n3.Display\n4.Exit\n";
        std::cout<<"Enter choice: ";
        std::cin>>ch;

        switch(ch){
            case 1: addFolder(dir); break;
            case 2: addFile(dir); break;
            case 3: display(dir); break;
        }
    }while(ch!=4);

    return 0;
}
