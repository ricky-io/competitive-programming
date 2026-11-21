#include <bits/stdc++.h>
using namespace std;

// Matric Chain Multiplaication :

// Memoization

vector<vector<int>> dp;
vector<vector<int>> dp2;

int f(int i, int j, vector<int>&v){
    if(i==j || i+1 == j) return 0;
    
    if(dp[i][j] != -1) return dp[i][j];
    
    int ans = INT_MAX;
    
    for(int k = i+1; k<j; k++){
        ans = min(ans, (f(i, k, v) + f(k, j, v) + v[i]*v[j]*v[k]));
    }
    return dp[i][j] = ans;
}

int main() {
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin>>v[i];
	dp.clear();
	dp.resize(1005, vector<int> (1000, -1));
	cout<<f(0, n-1, v)<<"  using memoization "<<endl;
	
	// Tabulation
	
	dp2.clear();
	dp2.resize(1005, vector<int> (1000, -1));
	for(int i=0; i<n; i++){
	    dp2[i][i] = 0;
	    for(int len = 2; len <n; len++){
	        for(int i=1; i+len-1 < n; i++){
	            int j = i + len - 1;
	            dp2[i][j] = INT_MAX;
	            for(int k = i; k<j; k++){
	                dp2[i][j] = min(dp2[i][j] , (dp2[i][k] + dp2[k+1][j] + v[i-1]*v[j]*v[k]));
	            }
	        }
	    }
	}
	cout<<dp2[1][n-1]<<"   using tabulation"<<endl;
	
	
	
	return 0;

}
