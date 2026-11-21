#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<vector<int>> mat(n, vector<int> (n));
	    
	    for(int i=0; i<n; i++) {
	        for(int j=0; j<n; j++){
	            cin >> mat[i][j];
	        }
	    }
	    
	    vector<vector<int>> mat2(n, vector<int> (n));
	    
	    for(int i=n-1; i>=0; i--){
	        for(int j=n-1; j>=0; j--){
	            mat2[n-1-i][n-1-j] = mat[i][j];
	        }
	    }
	    
	    int cnt = 0;
	    
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            if(mat[i][j] != mat2[i][j]) cnt++;
	        }
	    }
	    
	    cout << ((cnt<=k) ? "YES" : "NO") << '\n';
	}

}
