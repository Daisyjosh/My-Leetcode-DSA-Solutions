// Leetcode 66 Plus one

// Pattern: Array Traversing

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    for(int i = n-1; i>= 0; i--){
        if(digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i]=0;
    }
    digits.insert(digits.begin(),1);
    return digits;
}

int main()
{
    vector<int> digits = {4,3,2,1};
    vector<int> result = plusOne(digits);
    for(auto i : result)
    {
        cout << i << ",";
    }
    cout << endl;
    return 0;
}