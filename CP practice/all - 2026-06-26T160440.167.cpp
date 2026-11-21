#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
    int t;
	cin>>t;
	vector<int> q(t);
	int mx = 0;
	for(int i=0; i<t; i++){
	    cin>>q[i];
	    mx = max(mx, q[i]);
	}
    vector<long long> nums(mx+1);
    nums[1] = 2;
    nums[2] = 8;
    for(int i=3; i<=mx; i++){
        nums[i] = (6LL * nums[i-1] - 7LL * nums[i-2]) % mod;
        if (nums[i] < 0) nums[i] += mod;
    }
    
    for(int n : q){
	    cout<<(nums[n])%mod<<endl;
	}

}
