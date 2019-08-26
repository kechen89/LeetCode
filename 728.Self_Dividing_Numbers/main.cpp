#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main()
{
    int left, right;
    vector<int> ivec;
    Solution s;
    
    cout << "Input left bound " << endl;
    cin >> left;
    cout << "Input right bound " << endl;
    cin >> right;
    
    ivec= s.selfDividingNumbers(left, right);
    
    for (auto i : ivec)
        cout << i << endl;
}
