#include <bits/stdc++.h>
using namespace std;

// generateParenthesis optimal approach : 

class Solution{
public:

    vector<vector<string>> ans;
    
    void solve(string s, int open, int close, int n){
        if(s.size == 2*n){
            ans.push_back(s);
            return;
        }
        
        if(open < n){
            solve(s+"(", open +1, close, n);
        }
        if(open > close){
            solve(s+")", open, close +1, n);
        }
        
    }
    
    vector<vector<string> generateParenthesis(int n){
        solve("", 0, 0, n);
        return ans;
    }
};

int main() {
	// your code goes here

}
