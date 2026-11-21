#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> adj(n+1);
	
	while(m--){
	    int a, b;
	    cin >> a >> b;
	    
	    adj[a].push_back(b);
	    adj[b].push_back(a);
	}
	
	std::queue<int> q;
	vector<bool> visited(n+1, false);
	vector<int> parent(n+1, -1);
	q.push(1);
	//path.push_back(1);
	visited[1] = true;
	
	while(!q.empty()){
	    vector<int> dir;
	    int curr = q.front();
	    q.pop();
	    
	    for(auto neigh : adj[curr]){
	        if(visited[neigh]) continue;
	        visited[neigh] = true;
	        parent[neigh] = curr;
	        q.push(neigh);
	    }
	}
	
	if(!visited[n]){
	    cout << "IMPOSSIBLE" << '\n';
	}
	
	vector<int> path;
	int curr = n;
	while(curr != -1){
	    path.push_back(curr);
	    curr = parent[curr];
	}
	
	reverse(path.begin(), path.end());
	
	for(int x : path) cout << x << ' ';
	cout << '\n';
	
	

}
