#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dp;
    // Robber's House Rcursion
    int f(vector<int> arr, int i){
        if(i==arr.size() -1) return arr[i]; // 1 houses
        if(i==arr.size() -2) return max(arr[i], arr[i-1]); // 2 houses
        return max(arr[i] + f(arr, i+2), 0 + f(arr, i+1));
    }
    
    // Top- Down Approach : Recusion + Memoization;
    int f1(vector<int> arr, int i){
        if(i==arr.size() -1) return arr[i]; // 1 houses
        if(i==arr.size() -2) return max(arr[i], arr[i-1]); // 2 houses
        if(dp[i]!=-1) return dp[i]; // sub-problem already computed
        return dp[i] = max(arr[i] + f1(arr, i+2), 0 + f1(arr, i+1));
    }
    
    // Bottom up Approach : Tabulation
    int f3(vector<int>& arr){
        int n = arr.size();
        if(n==1) return arr[0];
        dp.clear();
        dp.resize(n);
        // base cases:
        dp[n-1] = arr[n-1];
        dp[n-2] = max(arr[n-1], arr[n-2]);
        
        for(int i=n-3; i>=0; i--){
            dp[i] = max(arr[i] + dp[i+2], 0 + dp[i+1]);
        }
        reuturn dp[0];
    }
    
    int rob(vector<int>& nums){
        return f(nums, 0);
    }
    
};    
int main() {
	
}