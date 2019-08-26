#ifndef SOLUTION_H
#define SOLUTION_H

#include<string>
#include<vector>

using namespace std;

class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ivec;
        string s;
        
        for (int i = left; i <= right; ++i)
        {
            s = std::to_string(i);
            unsigned flag = 0;
            for (auto c : s)
            {
                int j = int(c) - 48;
                if (j == 0 || i%j != 0) flag++;
            }
            if (flag == 0) ivec.push_back(i);
        }
        return ivec;
    }
};

#endif
