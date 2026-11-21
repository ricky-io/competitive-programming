#include <bits/stdc++.h>
using namespace std;


// Correct but TLE after 5 test cases : 


using ll = long long;
long long n, m, c, k;


long long mex(const vector<long long>& nums) {
    unordered_set<long long> st(nums.begin(), nums.end());

    long long ans = 0;
    while (st.count(ans))
        ans++;

    return ans;
}

long long solve(vector<long long> &nums, long long q, long long x){
    nums[q-1] = x;
    long long res = 0;
    
    for(int i=0; i<k; i++){
        vector<long long> nums2;
        for(int j = 0; j < n; j++){
            nums2.push_back((c*i + nums[j]) % m);
        }
        res += mex(nums2);
    }
    return res;
}

int main() {
    // Input variables
    
    cin>>n>>m>>c>>k;
	
	vector<long long> nums(n);
	
	for(int i=0; i<n; i++) cin>>nums[i];
	
	// Query input and execute
	
	int Q;
	cin>>Q;
	
	while(Q--){
	    long long q, x;
	    cin>>q>>x;
	    
	    long long ans = solve(nums, q, x);
	    cout<<ans<<endl;
	}
    return 0;
}
