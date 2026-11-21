class Solution {
public:
    vector<int> dp;
    int f(vector<int>& nums, int i){ // Recursion + memoization
        if(i == nums.size()-1) return nums[i];
        if(i == nums.size()-2) return max(nums[i], nums[i+1]);
        if(dp[i] != -1)  return dp[i];
        return dp[i] = max(nums[i] + f(nums, i+2), 0 + f(nums, i+1));
    }

    int f1(vector<int>& arr, int i){ // Tabulation/ Iterative
        int n = arr.size();
        dp.assign(n+2, 0);
        for(int i=n-1; i>=0; i--){
            dp[i] = max(arr[i] + dp[i+2], 0 + dp[i+1]);
        }
        return dp[0];
    }

    int rob(vector<int>& nums) {
        dp.assign(nums.size(), -1);
        //return f(nums, 0);
        return f1(nums, 0);
    }
};