#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    string J, S;
    Solution sol;
    
    cout << "Input Jewels string " << endl;
    cin >> J;
    cout << "Input Stones string " << endl;
    cin >> S;
    cout << sol.numJewelsInStones(J, S) << endl;
}
