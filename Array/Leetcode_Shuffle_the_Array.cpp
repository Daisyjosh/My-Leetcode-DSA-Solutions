// Leetcode 1470 Shuffle the Array

// Pattern: Array Traversal

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }
    return ans;
}

int main()
{
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> result = shuffle(nums,n);
    for(auto i: result)
    {
        cout << i << ",";
    }
    return 0;
}