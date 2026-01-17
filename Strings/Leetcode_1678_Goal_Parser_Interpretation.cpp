// Leetcode 1678 Goal Parser Interpretation

// Pattern: String Parsing

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string interpret(string command) {
    string ans = "";
    for(int i = 0; i < command.length(); i++)
    {
        if( command[i] == 'G')
        {
            ans+='G';
        }
        else if(command[i] == '(' && command[i+1] == ')')
        {
            ans += 'o';
        }
        else if(command[i] == '(' && command[i+1] == 'a')
        {
            ans+="al";
        }
    }
    return ans;
}

int main()
{
    string command = "G()(al)";
    cout << interpret(command) << endl;
    return 0;
}