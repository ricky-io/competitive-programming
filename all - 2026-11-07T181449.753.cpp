#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<unordered_map<int, int>>> votes(n+1, vector<unordered_map<int, int>> (n+1));
	
	int i=1;
	
	while(m--){
	    int x, y;
	    cin >> x >> y;
	    
	    for(int j=1; j<=n; j++){
	        if(x!=i){
	            votes[i][j][x]++; 
	        }
	        else votes[i][j][y]++;
	    }
	    i++;
	}
	
	for(int k=1; k<=n; k++){
	    int mx = 0;
	    for(int j=1; j<=n; j++){
	        for(auto &[a,b] : votes[k][j]) mx = max(mx, b);
	    }
	    
	    cout << mx << '\n';
	}
	
	return 0;
}
