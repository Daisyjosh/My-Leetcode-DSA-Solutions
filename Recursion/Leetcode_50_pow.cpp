// Leetcode 50 Pow(x,n)

// Pattern: Recursion

// Time Complexity: O(log n)
// Best, Average and Worst Cases: O(log n)

// Space Complexity: O(log n)

#include <iostream>
using namespace std;

double pow_x(double x, int n)
{
    long long N = n; // Edge Case.

    if(N < 0)
    {
        x = 1 / x;
        n -= n;
    }
    return pow_n(x,n);
}

double pow_n(double x, long long n)
{
    if(n == 0)
    {
        return 1;
    }
    double half = pow_n(x,n/2);
    if(n%2==0)
    {
        return half * half;
    }
    else{
        return x * half * half;
    }
}

int main()
{
    double x = 2.00000;
    int n = 10;
    cout << pow_x(x,n) << endl;
    return 0;
}