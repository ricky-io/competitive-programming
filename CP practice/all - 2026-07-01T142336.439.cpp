#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; int t;
	cin>>n>>t;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin>>nums[i];
	
	int ans = 0;
	
	for(int i=0; i<n; i++){
	    if(nums[i] <= t){
	        t-=nums[i];
	        ans++;
	    }
	}
	cout<<ans<<endl;
	return 0;

}
