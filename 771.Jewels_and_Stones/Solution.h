#ifndef SOLUTION_H
#define SOLUTION_H

#include<string>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cnt = 0;
        for (auto a : J){
            for (auto b : S){
                if (a == b) cnt++;
            }
        }
        return cnt;
    }
};

#endif
