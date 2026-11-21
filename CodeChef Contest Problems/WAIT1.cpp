#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<long long> nums(n);
	    
	    for(int i=0; i<n; i++) cin>>nums[i];
	    
	    long long total_wait = 0;
	    long long enter_time = nums[0];
	    
	    for(int i=1; i<n; i++){
	        enter_time = max(enter_time, nums[i]);
	        total_wait += enter_time - nums[i];
	    }
	    
	    cout<<total_wait<<endl;
	}
	
	return 0;

}
