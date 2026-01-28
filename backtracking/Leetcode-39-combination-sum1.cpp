// 39. Combination Sum I

// Pattern: Backtracking

// Time Complexity: O(2^t),  where T = target / min(nums)
// Best, Average and Worst Case: O(2^t)

// Space Complexity: O(t)

#include <iostream>
#include <vector>
using namespace std;

void helper(int idx, vector<int> nums, int target, vector<int> &ds, vector<vector<int>> &ans)
{
    if(idx == nums.size())
    {
        if(target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if(nums[idx] <= target)
    {
        ds.push_back(nums[idx]);
        helper(idx,nums,target-nums[idx],ds,ans);
        ds.pop_back();
    }
    helper(idx+1,nums,target,ds,ans);
}
vector<vector<int>> combinationSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    helper(0,nums,target,ds,ans);
    return ans;
}

int main()
{
    vector<int> nums = {2,3,6,7};
    int target = 7;
    vector<vector<int>> result = combinationSum(nums,target);
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

