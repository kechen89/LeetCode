#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        for (auto &c : str){
            c = tolower(c);
        }
        return str;
    }
};

#endif
