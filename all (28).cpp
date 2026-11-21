#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int n, k;
	cin >> n >> k;
	
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	
	vector<bool> dp(k+1, false);
	
	for(int i=1; i<=k; i++){
	    for(int j=0; j<n; j++){
	        if(i >= a[j] && !dp[i-a[j]]){
	           dp[i] = true;
	           break;
	            
	        }
	    }
	}
	
	cout << (dp[k] ? "First" : "Second") << '\n';
	
	return 0;

}
