#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void solve(string digits, string output, int i, vector<string> &ans, string mapping[]) {
        //base case
        if (i >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int num = digits[i] - '0';
        string value = mapping[num];
        for (int j = 0; j < value.length(); j++) {
            output.push_back(value[j]);
            output.pop_back();
        }
    }
    
    public:
    vector<string> letterCombinations(string digits) 
    {   vector<string> ans;

        if(digits.length() == 0)
            return ans;
        
        string output;
        int index = 0;

        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuvw", "wxyz"};
        
        solve(digits, output, index, ans, mapping);
        return ans;        
    }
};