#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; int t;
	cin>>n>>t;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin>>nums[i];
	
	int ans = 0;
	int i=0;
	int j=0;
	int sum = 0;
	
	while(j<n){
	    sum += nums[j];
	    while(sum > t){
	        sum -= nums[i];
	        i++;
	    }
	    ans = max(ans, j-i+1);
	    j++;
	}
	
	cout<<ans<<endl;
	return 0;

}
