#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    vector<int> nums(n+1);
	    
	    bool ans = true;
	    
	    for(int i=1; i<=n; i++){
	        cin>>nums[i];
	            if(nums[i] != i && nums[i] != n- i + 1) ans = false;
	       
	    }
	    
	    if(ans) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	    }
	    
	return 0;

}
