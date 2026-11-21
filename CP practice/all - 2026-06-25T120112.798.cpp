#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin>>nums[i];
	
	int max_ans = 1;
	int ans = 1;
	for(int i=1; i<n; i++){
	    if(nums[i] > nums[i-1]) ans++;
	    else ans = 1;
	    
	    max_ans = max(max_ans, ans);
	}
	cout<<max_ans<<endl;
    return 0;
}
