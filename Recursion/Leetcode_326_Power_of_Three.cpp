// Leetcode 326 Power of Three

// Pattern: Recursion

// Time Complexity: O(log n)
// Best, Average and Worst Cases: O(log n)

// Space Complexity: O(log n)

#include <iostream>
using namespace std;
bool pow_three(int n)
{
    if(n == 1)
    {
        return true;
    }
    if((n <= 0) || (n%3!=0))
    {
        return false;
    }
    return pow_three(n/3);
}

int main()
{
    cout << pow_three(9) << endl;
    return 0;
}