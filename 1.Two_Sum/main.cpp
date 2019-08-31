#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> vi;
    Solution s;
    
    vi = s.twoSum(nums, target);
    
    for (auto i : vi)
        cout << i << " ";
    cout << endl;
}
