// Leetcode 1832 Check if the Sentencce Is Pangram

// Pattern: Frequency Array / Hashing

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkIfPangram(string sentence) {
    if(sentence.length() < 26)
        return false;

    int freq[26] = {0};

    for(char ch : sentence) {
        ch = tolower(ch);
        freq[ch - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] == 0)
            return false;
    }

    return true;
}

int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    cout << checkIfPangram(sentence) << endl;
    return 0;
}