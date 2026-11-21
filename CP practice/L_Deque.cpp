#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dp[3005][3005];
ll arr[3005];

ll f(int i, int j){
    if(i == j) return arr[i];
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max(arr[i] - f(i+1, j), arr[j] - f(i, j-1));
}

ll fbu(int n){
    memset(dp, 0, sizeof dp);
    //base case:
    for(int i=0; i<n; i++){
        dp[i][j] = arr[i];
    }
    
    for(int len = 2; len<=n; len++){
        for(int i=0; i<= n-len; len++){
            int j = i + len - 1;
            dp[i][j] = max(arr[i] - dp[i+1, j], arr[j] - dp[i, j-1]);
        }
    }
    return dp[0][n-1];
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
	    cin>>arr[i];
	}
	memset(dp, -1, sizeof dp);
	cout<<f(0, n-1)<<"\n";
	return 0;

}
