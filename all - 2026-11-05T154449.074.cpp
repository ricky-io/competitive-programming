#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	vector<vector<int>> adj(n+1);
	
	for(int i=1; i<=n; i++){
	    for(int j=1; j<=n; j++){
	        int x;
	        cin >> x;
	        
	        if(x == 1) adj[i].push_back(j);
	    }
	}
	
	for(int i=1; i<=n; i++){
	    vector<int> dist(n+1, -1);
	    queue<int> q;
	    
	    q.push(i);
	    
	    dist[i] = 0;
	    
	    int ans = INT_MAX;
	    
	    while(!q.empty()){
	        int curr = q.front();
	        q.pop();
	        
	        for(auto neigh : adj[curr]){
	            if(neigh == i){
	                ans = min(ans, dist[curr] + 1);
	                continue;
	            }
	            if(dist[neigh] == -1){
	                dist[neigh] = dist[curr] + 1;
	                q.push(neigh);
	            }
	            
	        }
	    }
	    
	    if(ans == INT_MAX){
	        cout << "NO WAY" <<'\n';
	    }
	    else {
	        cout << ans << '\n';
	    }
	    
	}

	return 0;	
	
}
