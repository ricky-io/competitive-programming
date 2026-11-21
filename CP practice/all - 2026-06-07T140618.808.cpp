#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> nums(n);
	long long int sum = 0;
	for(int i=0; i<n-1; i++){
	    int x;
	    cin>>x;
	    sum+=x;
	    nums.push_back(x);
	    sum%=MOD;
	}
    long long int ans = (n * (n+1))%MOD;
	ans = ans/2;
	ans = ans - sum;
	cout<<ans<<endl;
	
}
