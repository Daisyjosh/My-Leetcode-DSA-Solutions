// Leetcode 231 Power of Two

// Pattern: Recursion

// Time Complexity: O(log n)
// Best, Average and Worst Cases: O(log n)

// Space Complexity: O(log n)

#include <iostream>
using namespace std;

bool pow_two(int n)
{
    if(n == 1)
    {
        return true;
    }
    if((n <= 0) || (n%2!=0))
    {
        return false;
    }
    return pow_two(n/2);
}

int main()
{
    cout << pow_two(4) << endl;
    return 0;
}