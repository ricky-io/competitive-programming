


bool f(vector<int> &nums, int i, int curr_sum, int k, vector<vector<int>> &dp){
    if(i == nums.size()) return false;
    
    if(dp[i] != -1) return dp[i];
    
    bool not_take = f(nums, i+1, curr_sum, k, dp);
    bool take = false;
    
    if(dp < k){
        take = f(nums, i+1, nums[i]+curr_sum, k, dp)
    }
    
    return take | not_take;
}

bool existsSubsequence(vector<int>& nums,int n, int k) {
    vector<int> dp(k+1, -1);
    sort(nums.begin(), nums.end());
    return f(nums, 0, 0, k, dp);
    
}