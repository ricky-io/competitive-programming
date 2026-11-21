#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> nums(n);
	    
	    for(int i=0; i<n; i++){
	        cin>>nums[i];
	    }
	    
	    int ans = 0;
	    for(int i=0; i<n-1; i++){
	        if(nums[i] % (nums[i] - nums[i+1]) == 0) ans++;
	    }
	    cout<<ans<<endl;
	   
	}
return 0;
}
