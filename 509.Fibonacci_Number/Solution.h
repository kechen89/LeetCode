#ifndef SOLUTION_H
#define SOLUTION_H

class Solution {
public:
    int fib(int N) {
        int Fn;
        
        if (N == 0)
            Fn = 0;
        else if (N == 1)
            Fn = 1;
        else
            Fn = fib(N - 1) + fib(N - 2);
        return Fn;
    }
};

#endif
