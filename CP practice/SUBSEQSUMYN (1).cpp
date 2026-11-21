


bool f(vector<int> &nums, int i, int curr_sum, int k, vector<vector<int>> &dp){
    if(curr_sum == k) return true;
    if(i == nums.size()) return false;
    
    if(dp[i][curr_sum] != -1) return dp[i][curr_sum];
    
    bool not_take = f(nums, i+1, curr_sum, k, dp);
    bool take = false;
    
    if(curr_sum + nums[i] <= k){
        take = f(nums, i+1, nums[i]+curr_sum, k, dp);
    }
    
    return dp[i][curr_sum] = take || not_take;
}

bool existsSubsequence(vector<int>& nums,int n, int k) {
    vector<vector<int>>dp(n, vector<int>(k+1, -1));
    return f(nums, 0, 0, k, dp);
    
}