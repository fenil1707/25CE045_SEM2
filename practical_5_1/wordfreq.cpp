#include <iostream>
#include "wordfreq.h"
using namespace std;

string toLowerCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    return s;
}

void processParagraph(string paragraph) {
    string words[100];
    int count[100] = {0};
    int wordCount = 0;

    string temp = "";

    for (int i = 0; i <= paragraph.length(); i++) {
        if (paragraph[i] == ' ' || paragraph[i] == '\0') {
            if (temp != "") {
                temp = toLowerCase(temp);
                int found = -1;

                for (int j = 0; j < wordCount; j++) {
                    if (words[j] == temp) {
                        found = j;
                        break;
                    }
                }

                if (found != -1) {
                    count[found]++;
                } else {
                    words[wordCount] = temp;
                    count[wordCount] = 1;
                    wordCount++;
                }

                temp = "";
            }
        } else {
            temp += paragraph[i];
        }
    }

    cout << "\nWord Frequencies:\n";
    for (int i = 0; i < wordCount; i++) {
        cout << words[i] << " : " << count[i] << endl;
    }
}

