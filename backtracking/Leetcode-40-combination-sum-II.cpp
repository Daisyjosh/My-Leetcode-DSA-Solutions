// 40. Combination Sum II 

// Pattern: backtracking

// Time Complexity:  O(2^n * n)

// Auxiliary space: O(n)
// Total space (including output): O(2^n * n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(int idx, int target, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds)
{
    if(target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for(int i = idx; i < nums.size(); i++)
    {
        if(i > idx && nums[i] == nums[i-1]) continue;
        if(nums[i] > target) break;

        ds.push_back(nums[i]);
        helper(i+1,target-nums[i],nums,ans,ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSumII(vector<int> &candidates, int target){
    sort(candidates.begin(),candidates.end());

    vector<vector<int>> ans;
    vector<int> ds;

    helper(0,target,candidates,ans,ds);
    return ans;
}

int main()
{
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> result = combinationSumII(candidates,target);
    for(int i = 0; i<result.size();i++)
    {
        cout<<"{";
        for(int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << ",";
        }
        cout << "}";
    }
    return 0;
}