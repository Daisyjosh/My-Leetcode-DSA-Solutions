// Leetcode 1431 Kids With the Greatest Number of Candies

// Pattern: Array Traversal

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> ans;
    int maxi = INT_MIN;
    for(auto i: candies)
    {
        maxi = max(maxi,i);
    }
    for(int i = 0; i < candies.size(); i++)
    {
        int count = candies[i] + extraCandies;
        if(count >= maxi)
        {
            ans.push_back(true);
        }
        else
        {
            ans.push_back(false);
        }

    }
    return ans;
}

int main()
{
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool> result = kidsWithCandies(candies,extraCandies);
    for(bool i : result)
    {
        cout << i << ",";
    }
    return 0;
}