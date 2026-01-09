// Leetcode 342 Power of Four

// Pattern: Recursion

// Time Complexity: O(log n)
// Best, Average and Worst Cases: O(log n)

// Space Complexity: O(log n)

#include <iostream>
using namespace std;

bool pow_four(int n)
{
    if(n == 1)
    {
        return true;
    }
    if((n <= 0) || (n%4!=0))
    {
        return false;
    }
    return pow_four(n/4);
}

int main()
{
    cout << pow_four(16) << endl;
    return 0;
}