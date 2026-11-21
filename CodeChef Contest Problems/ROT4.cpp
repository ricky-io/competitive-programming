#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> nums(n);
	    
	    for(int i=0; i<n; i++) cin >> nums[i];
	    
	    int ans = 0;
	    
	    int x = nums[0];
	    
	    int i=1;
	    
	    while(i < n){
	        x = x*10 + nums[i];
	        if(x % 4 == 0) ans++;
	        
	        x = nums[i];
	        i++;
	    }
	    
	    x = nums[0]*10 + nums[n-1];
	    if(x % 4 == 0) ans++;
	    
	    cout << ans << '\n';
	}

}
