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
	    
	    int sum = 0;
	    
	    if(nums[0] != -1 && nums[n-1] != -1){
	        sum = abs(nums[n-1] - nums[0]);
	        cout<<sum<<endl;
	        for(int i=0; i<n; i++){
	            cout<<(nums[i]== -1 ? 0 : nums[i])<<" ";
	        }
	        cout<<endl;
	    } else {
	        cout<<sum<<endl;
	        nums[0] = max(nums[0], nums[n-1]);
	        nums[n-1] = max(nums[0], nums[n-1]);
	        for(int i=0; i<n; i++){
	            cout<<(nums[i]== -1 ? 0 : nums[i])<<" ";
	        }
	        cout<<endl;
	    }
	    
	}
	return 0;

}
