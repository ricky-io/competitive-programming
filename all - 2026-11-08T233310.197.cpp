#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    n--;
	    
	    int msb = log2(n);
	    
	    vector<int> ans;
	    
	    int nums = pow(2, msb) - 1;
	    
	    while(nums >= 0){
	        ans.push_back(nums);
	        nums--;
	    }
	    
	    nums = pow(2, msb);
	    
	    while(nums <= n){
	        ans.push_back(nums);
	        nums++;
	    }
	    
	    for(int i=0; i<ans.size(); i++) cout << ans[i] << ' ';
	    
	    cout << '\n';
	}
	
	return 0;

}
