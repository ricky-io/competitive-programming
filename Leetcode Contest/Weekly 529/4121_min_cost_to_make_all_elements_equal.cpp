#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();

        long long ans = LLONG_MAX;

        int s=0;

        while(s<n){
            // Find the end of current equal-value block
            int e = s;
            while(e+1 < n && nums[e+1]==nums[s]) e++;

            // Entire array already has same value
            if(s==0 && e==n-1) return 0;

            // Invalid only when the block is a single
            // element at index 0 or index n-1.
            bool valid = !(s==0 && e==0) && !(s==n-1 && e==n-1);
            if(valid){
                // Number of elements outside this block
                long long steps = (s>0 ? s : 0) + (e < n-1 ? n-1 - e : 0);
                ans = min(ans, steps*nums[s]);
            }
            // Move to next block
            s = e+1;
        }
        return ans;
    }
};


signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    
    }
    return 0;

}
