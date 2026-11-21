#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> nums(n);
	    for(int i=0; i<n; i++) cin>>nums[i];
	    
	    unordered_map<int, vector<int>> st;
	    
	    for(int x : nums){
	        int steps = 0;
	        
	        while(true){
	            st[x].push_back(steps);
	            
	            if(x==0) break;
	            x/=2;
	            steps++;
	        }
	    }
	    
	    int ans = INT_MAX;
	    
	    for(auto &[val, vec] : st){
	        if(vec.size() == n){
	            int total = std::accumulate(vec.begin(), vec.end(), 0);
	            ans = min(ans, total);
	        }
	    }
	    
	    cout<<ans<<endl;
	}

}
