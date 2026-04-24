#include <iostream>
#include "dir.h"

void addFolder(std::map<std::string,std::vector<std::string>>& dir){
    std::string folder;
    std::cout<<"Enter folder name: ";
    std::cin>>folder;
    dir[folder];
}

void addFile(std::map<std::string,std::vector<std::string>>& dir){
    std::string folder,file;
    std::cout<<"Enter folder name: ";
    std::cin>>folder;

    if(dir.find(folder)==dir.end()){
        std::cout<<"Folder not found\n";
        return;
    }

    std::cout<<"Enter file name: ";
    std::cin>>file;
    dir[folder].push_back(file);
}

void display(const std::map<std::string,std::vector<std::string>>& dir){
    for(auto it=dir.begin();it!=dir.end();it++){
        std::cout<<"Folder: "<<it->first<<std::endl;
        std::vector<std::string> files=it->second;
        for(int i=0;i<files.size();i++){
            std::cout<<"  "<<files[i]<<std::endl;
        }
    }
}

