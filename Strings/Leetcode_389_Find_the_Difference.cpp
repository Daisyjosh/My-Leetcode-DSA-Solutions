// Leetcode 389 Find the Difference

// Pattern: Frequency Array (Hashing)

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
    int freq[26] = {0};
    for(char c:s)
    {
        freq[c - 'a']++;
    }
    for(char c : t)
    {
        freq[c - 'a']--;
    }
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            return char(i + 'a');
        }
    }
    return ' ';
}

int main()
{
    string s = "abcd";
    string t = "abcde";
    cout << findTheDifference(s,t) << endl;
    return 0;
}