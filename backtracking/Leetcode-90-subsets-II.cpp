// 90. Subsets II

// pattern: backtracking

// Time Complexity: O(2^n*n)
// Best Case: O(2^n)
// Average Case: O(2^n*n)
// worst Case: O(2^n*n)

// Auxiliary Space: O(n)
// Output Space: O(2^n*n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(int idx, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds)
{
    ans.push_back(ds);

    for(int i = idx; i < nums.size();i++)
    {
        if(i > idx && nums[i]==nums[i-1])
        {
            continue;
        }
        ds.push_back(nums[i]);
        helper(i+1,nums,ans,ds);
        ds.pop_back();
    }
}

vector<vector<int>> subsetsII(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    vector<int> ds;
    helper(0,nums,ans,ds);
    return ans;
}

int main()
{
    vector<int> nums = {1,2,2};
    vector<vector<int>> result = subsetsII(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout << "{";
        for(int j = 0; j < result[i].size();j++)
        {
            cout << result[i][j] << ",";
        }
        cout << "}";
    }
    return 0;
}