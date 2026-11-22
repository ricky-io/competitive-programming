#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    int countDominantElements(vector<int>& nums) {

        int cnt = 0;
        int n = nums.size();
        if(nums.size() <= 1) return n;

        for(int i=1; i<nums.size()-1; i++){
            if(nums[i] >= double((nums[i-1]+nums[i+1])/2.0)) cnt++;
        }

        if(nums[0] >= nums[1]) cnt++;
        if(nums[n-1] >= nums[n-2]) cnt++;

        return cnt;
        
    }
};


signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    
    }
    return 0;

}
