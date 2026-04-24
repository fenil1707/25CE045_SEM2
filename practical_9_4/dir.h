#ifndef DIR_H
#define DIR_H
#include <map>
#include <vector>
#include <string>

void addFolder(std::map<std::string,std::vector<std::string>>& dir);
void addFile(std::map<std::string,std::vector<std::string>>& dir);
void display(const std::map<std::string,std::vector<std::string>>& dir);

#endif

