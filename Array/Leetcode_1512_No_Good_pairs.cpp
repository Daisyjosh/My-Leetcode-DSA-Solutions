// Leetcode 1512 Number of Good Pairs

// Pattern: Brute Force (Nested Loop)

// Time Complexity: O(n*n)
// Best, Average and Worst Cases: O(n*n)

// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i; j<nums.size(); j++)
        {
            if(nums[i]==nums[j] and i <j)
            {
                count += 1;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {1,2,3,1,1,3};
    int result = numIdenticalPairs(nums);
    cout << result << endl;
    return 0;
}