#ifndef SOLUTION_H
#define SOLUTION_H

#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        for (unsigned i = 0; i != nums.size() - 1; ++i) {
            for (unsigned j = i+1; j != nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    s.push_back(i);
                    s.push_back(j);
                }
            }
        }
        return s;
    }
};

#endif
