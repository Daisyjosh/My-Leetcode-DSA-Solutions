// 78. Subsets

// Pattern: Backtracking

// Time Complexity: O((2^n)*n)
// Best, Average and worst cases: O((2^n)*n)

// space complexity: O(n)
// output space: O(2^n*n)

#include <iostream>
#include <vector>
using namespace std;
void sub_subsets(int idx, vector<int> ds, vector<int> &nums, vector<vector<int>> &ans)
{
    if(idx == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[idx]);
    sub_subsets(idx+1,ds,nums,ans);
    ds.pop_back();

    sub_subsets(idx+1,ds,nums,ans);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sub_subsets(0,ds,nums,ans);
    return ans;
}



int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = subsets(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout << "{";
        for(int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << ",";
        }
        cout << "}" << endl;
    }

    return 0;
}
