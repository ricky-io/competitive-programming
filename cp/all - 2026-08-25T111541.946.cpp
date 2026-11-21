#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, p;
	    cin >> n >> p;
	    vector<pair<int, int>> nums(n);
	    
	    for(int i=0; i<n; i++) cin >> nums[i].first;
	    for(int i=0; i<n; i++) cin >> nums[i].second;
	    
	    std::sort(nums.begin(), nums.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
	    });
	    
	    long long ans = p;
	    int informed = 1;
	    
	    for(int i=0; i<n; i++){
	        if(nums[i].second >= p) break;
	        
	        int canshare = nums[i].first;
	        int remaining = n - informed;
	        
	        int use = min(canshare, remaining);
	        
	        ans += 1LL * use * nums[i].second;
	        
	        informed += use;
	        
	        if(n == informed) break;
	        
	        
	    }
	    
	    ans += 1LL * (n - informed) * p;
	    
	    cout << ans << endl;
	}

}
