// Leetcode 1929 Concatenation of Array

// Pattern: Array Traversal

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i]);
    }
    for(int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i]);
    }
    return ans;
}


int main()
{
    vector<int> nums = {1,2,1};
    vector<int> result = getConcatenation(nums);
    for(int i: result)
    {
        cout  << i << ",";
    }
    return 0;
}