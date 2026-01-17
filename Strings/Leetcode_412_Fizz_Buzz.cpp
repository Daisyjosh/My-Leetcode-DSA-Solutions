// Leetcode 412 Fizz Buzz

// Pattern: Conditional Logic + String Manipulation

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> ans;
    for(int i = 1; i <= n; i++)
    {
        if((i % 3 == 0) && (i%5==0))
        {
            ans.push_back("FizzBuzz");
        }
        else if(i % 3 == 0)
        {
            ans.push_back("Fizz");
        }
        else if(i % 5 == 0)
        {
            ans.push_back("Buzz");
        }
        else
        {
            ans.push_back(to_string(i));
        }
    }
    return ans;
}

int main()
{
    int n = 3;
    vector<string> result = fizzBuzz(n);
    for(string ch : result)
    {
        cout << ch << " ";
    }
    return 0;

}