#include <bits/stdc++.h>
using namespace std;

// C. Vacation:

int main() {
	int n;
	cin >> n;
	
	vector<long long> a(n+1);
	vector<long long> b(n+1);
	vector<long long> c(n+1);
	
	for(int i=1; i<=n; i++) cin>>a[i]>>b[i]>>c[i];

	vector<vector<long long>> dp(n+1, vector<long long> (3, 0));
	
	dp[1][0] = a[1];
	dp[1][1] = b[1];
	dp[1][2] = c[1];
	
	for(int i=2; i<=n; i++){
	    dp[i][0] = a[i] + max(dp[i-1][1], dp[i-1][2]);
	    dp[i][1] = b[i] + max(dp[i-1][0], dp[i-1][2]);
	    dp[i][2] = c[i] + max(dp[i-1][0], dp[i-1][1]);
	}
	
	long long sum = max(dp[n][0], max(dp[n][1], dp[n][2]));
	
	cout<<sum<<endl;
	
	return 0;

}
