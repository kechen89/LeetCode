#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    string str;
    Solution s;
    
    cout << "Input a string " << endl;
    cin >> str;
    cout << s.toLowerCase(str) << endl;
}
