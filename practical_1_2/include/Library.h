
#include<iostream>
#include<string>
#ifndef LIBRARY_H
#define LIBRARY_H
using namespace std;

class Library
{
    public:


          void getdata();
          void display();
          int addcopies(int);
         int issuebook(int);
          int returnbook(int);

    protected:

    private:
        char book_name[15];
         string author_name;
            int book_id;
            int copies;
};

#endif // LIBRARY_H
