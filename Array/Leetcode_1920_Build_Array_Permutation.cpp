// Leetcode 1920 Build Array From Permutation

// Pattern: Array Traversal

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans(nums.size());
    
    for(int i = 0; i < nums.size(); i++) {
        ans[i] = nums[nums[i]];
    }
    
    return ans;
}

int main()
{
    vector<int> nums = {0,2,1,5,3,4};
    vector<int> result = buildArray(nums);
    for(int i : result)
    {
        cout << i << ",";
    }
    return 0;
}