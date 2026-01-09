// Leetcode 509 Fibonacci Series

// Pattern: Recursion

// Time Complexity: O(2^n)
// Best, Average and Worst Cases: O(2^n)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int fib(int n)
{
    if((n == 0) || (n == 1))
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    cout << fib(5) << endl;
    return 0;
}