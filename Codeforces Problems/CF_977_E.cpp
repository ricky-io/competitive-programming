#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> adj[N];
bool vis[N];
bool ok;


void dfs(int u){
    vis[u] = true;
    if(adj[u].size() != 2) ok = false;
    for(int v : adj[u]){
        if(!vis[v]) dfs(v);
    }
}


int main() {
	// your code goes here
	int n, m;
	cin>>n>>m;
	
	while(m--){
	    int u, v;
	    cin>>u>>v;
	    adj[u].push_back(v);
	    adj[v].push_back(u);
	}
	
	int ans = 0;
	
	for(int i=1; i<=n; i++){
	    if(!vis[i]){
	        ok = true;
	        dfs(i);
	        if(ok) ans++;
	    }
	}
	
	cout<<ans<<endl;
	
return 0;
}
