#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    int num;
    Solution s;
    
    cout << "Input number " << endl;
    cin >> num;
    
    cout << "Fibonacchi number is " << s.fib(num) << endl;
}
