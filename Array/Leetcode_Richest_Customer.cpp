// Leetcode 1672 Richest Customer Wealth

// Pattern: Array Traversal

// Time Complexity: O(m*n)
// Best, Average and Worst Cases: O(m*n)

// Space Complexity: O(m)

#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    vector<int> ans;
    for(auto row: accounts)
    {
        int count = 0;
        for(auto i: row)
        {
            count += i;
        }
        ans.push_back(count);
    }
    int maxi = INT_MIN;
    for(int x: ans)
    {
        maxi = max(x, maxi);
    }
    return maxi;
}

int main()
{
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    int result = maximumWealth(accounts);
    cout << result << endl;
    return 0;
}