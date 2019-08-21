#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    string str;
    Solution sol;
    
    cout << "Input a string " << endl;
    cin >> str;
    cout << sol.toLowerCase(str) << endl;
}
