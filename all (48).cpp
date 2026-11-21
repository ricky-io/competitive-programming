#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n, r, m;
	    cin >> n >> r >> m;
	    
	    vector<vector<int>> adj(n+1);
	    
	    while(r--){
	        int a, b;
	        cin >> a >> b;
	        
	        adj[a].push_back(b);
	        adj[b].push_back(a);
	    }
	    
	    queue<tuple<int, int, int>> q;
	    
	    vector<int> owner(n+1);
	    
	    bool valid = true;
	    
	    for(int i=1; i<=m; i++){
	        int k, s;
	        cin >> k >> s;
	        
	        if(owner[k] != 0){
	            valid = false;
	        }
	        else {
	            owner[k] = i;
	            q.push({k, s, i});
	        }
	    }
	    
	    // Multi-source BFS:
	    
	    while(!q.empty() && valid){
	        auto [u, strength, id] = q.front();
	        q.pop();
	        
	        if(strength == 0) continue;
	        
	        for(auto v : adj[u]){
	            if(owner[v] == 0){
	                owner[v] = id;
	                q.push({v, strength-1, id});
	            }
	            else if(owner[v] != id){
	                valid = false;
	                break;
	            }
	        }
	    }
	    
	    cout << (valid ? "YES" : "NO") << '\n';
	    
	}
	
	return 0;

}
