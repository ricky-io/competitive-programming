#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) cin>>nums[i];
	
	vector<int> leaders;
	leaders.push_back(nums[n-1]);
	
	int smax = nums[n-1];
	
	for(int i=n-2; i>=0 ; i--){
	    if(nums[i] > smax){
	        leaders.push_back(nums[i]);
	        smax = nums[i];
	    }
	}
	
	for(int x = leaders.size()-1; x>=0; x--){
	    cout<<leaders[x]<<" ";
	}
    return 0;
}
