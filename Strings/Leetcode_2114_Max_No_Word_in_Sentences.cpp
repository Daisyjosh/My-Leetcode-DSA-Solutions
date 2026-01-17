// Leetcode 2114 Maximum Number of Words Found in Sentences

// Pattern: String Traversal

// Time Complexity: O(totalCharacters)
// Best, Average and Worst Cases: O(totalCharacters)

// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int maxi = INT_MIN;
    for(string s: sentences)
    {
        int count = 1;
        for(char i : s)
        {
            if(i==' ')
            {
            count++;
            }
        }
        maxi = max(count,maxi);
    }
    return maxi;
}

int main()
{
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout << mostWordsFound(sentences) << endl;
    return 0;
}