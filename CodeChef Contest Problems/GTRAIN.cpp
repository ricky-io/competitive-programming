#include <bits/stdc++.h>
using namespace std;

vector<int> dp(2500, -1);

int f(vector<int>&b, int target){
    if(target == 0) return 0;
    
    if(dp[target] != -1) return dp[target];
    
    int count = INT_MAX;
    
    for(int i=0; i<b.size(); i++){
        if(b[i] <= target){
            count = min(count, f(b, target-b[i]));
        }
    }
    return dp[target] = (count == INT_MAX) ? INT_MAX : 1 + count;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> a(n);
	    vector<int> b(n);
	    
	    for(int i=0; i<n; i++) cin>>a[i];
	    for(int i=0; i<n; i++) cin>>b[i];
	    
	    long long cnt = 0;
	    dp.assign(2001, -1); 
	    
	    for(int i=0; i<n; i++){
	        
	        int target = 2*a[i];
	        
	        int ans = f(b, target);
	        if(ans != INT_MAX) cnt += ans;
    	    
	    }
	    cout<<cnt<<endl;
	}

}
