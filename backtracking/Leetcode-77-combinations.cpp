// 77. Combinations

// Pattern: backtracking

// Time Complexity: O(C(n*k)*k)
// Best, Average and Worst Cases: O(C(n*k)*k)

// Space Complexity: O(k)
// output space : O(C(n,k)*k)

#include <iostream>
#include <vector>
using namespace std;

void helper(int start, int n, int k, vector<int> &ds, vector<vector<int>> &ans)
{
    if(ds.size() == k)
    {
        ans.push_back(ds);
        return;
    }
    for(int i = start; i<=n; i++)
    {
        ds.push_back(i);
        helper(i+1,n,k,ds,ans);
        ds.pop_back();

    }
}
vector<vector<int>> combine(int n, int k)
{
    vector<vector<int>> ans;
    vector<int> ds;
    helper(1,n,k,ds,ans);
    return ans;
}


int main()
{
    int n = 4;
    int k = 2;
    vector<vector<int>> result = combine(n,k);
    for(int i = 0; i < result.size(); i++)
    {
        cout << "{";
        for(int j = 0; j< result[i].size();j++)
        {
            cout << result[i][j] << ",";
        }
        cout << "}";
    }
    return 0;
}