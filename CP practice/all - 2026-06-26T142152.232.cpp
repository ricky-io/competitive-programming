#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<long long> nums(n);
	for(int i=0; i<n; i++) cin>>nums[i];
	
	long long ans = 0;
	for(int i=1; i<n; i++){
	    if(nums[i] < nums[i-1]){
	        long long sum = nums[i-1] - nums[i];
	        nums[i] += sum;
	        ans += sum;
	    }
	}
	cout<<ans<<endl;
}
