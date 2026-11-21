#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main() {
	int n, m;
	cin >> n >> m;
	
	vector<int> first(n+1, 0);
	
	vector<unordered_map<int, int>> transfer(n+1);
	
	for(int i=0; i<m; i++){
	    int x, y;
	    cin >> x >> y;
	    
	    first[x]++;
	    transfer[x][y]++;
	}
	
	int best = -1; int second = -1;
	
	for(int i=1; i<=n; i++){
	    if(best == -1 || first[i] > first[best] || (first[i] == first[best] && i < best)){
	        second = best;
	        best = i;
	    }
	    
	    else if(second == -1 || first[i] > first[second] || (first[i] == first[second] && i < second)){
	        second = i;
	    }
	}
	
	for(int k=1; k<=n; k++){
	    int winner = (best == k) ? second : best;
	    int mx = first[winner];
	    
	    for(auto &[cand, cnt] : transfer[k]){
	        int votes = first[cand] + cnt;
	        
	        if(votes > mx || (votes == mx && cand < winner)){
	            mx = votes;
	            winner = cand;
	        }
	    }
	    
	    cout << winner << '\n';
	}
	
	return 0;
}
