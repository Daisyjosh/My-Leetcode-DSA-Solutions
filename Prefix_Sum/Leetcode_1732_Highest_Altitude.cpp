// Leetcode 1732 Find the Highest Altitude

// Pattern: Prefix Sum

// Time Complexity: O(n)
// Best, Average, and Worst Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int largestAltitude(vector<int> &gain)
{
    int current = 0, maxgain = 0;
    for(int g: gain)
    {
        current += g;
        maxgain = max(maxgain,current);
    }
    return maxgain;
}

int main()
{
    vector<int> gain = {5,1,5,0,-7};
    int result = largestAltitude(gain);
    cout << result << endl;
    return 0;

}