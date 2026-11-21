#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes herew
	//int t;
	//cin >> t;
	
	//while(t--){
	    int n, m, k;
	    cin >> n >> m >> k;
	    
	    vector<vector<int>> adj(n+1);
	    
	    while(m--){
	        int x, y;
	        cin >> x >> y;
	        
	        adj[x].push_back(y);
	        adj[y].push_back(x);
	    }
	    
	    // O(K) : 
	    
	    set<tuple<int, int, int>> forbidden;

        for (int i = 0; i < k; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            forbidden.insert({a, b, c});
        }
        
        vector<vector<int>> dist(n+1, vector<int> (n+1, -1));
        
        vector<vector<int>> parent(n+1, vector<int> (n+1, -1));
        
        queue<pair<int, int>> q;
        
        dist[0][1] = 0;
        q.push({0, 1});
        
        pair<int, int> finish = {-1, -1};
        
        while(!q.empty()){
            auto [prev, curr] = q.front();
            q.pop();
            
            if(curr == n){
                finish = {prev, curr};
                break;
            }
            
            for(int next : adj[curr]){
                if(forbidden.count({prev, curr, next})){
                    continue;
                }
                if(dist[curr][next] != -1){
                    continue;
                }
                
                dist[curr][next] = dist[prev][curr] + 1;
                parent[curr][next] = prev;
                
                q.push({curr, next});
            }
        }
        
        if(finish.first == -1){
            cout << -1 << '\n';
            return 0;
        }
        
        vector<int> path;
        int prev = finish.first;
        int curr = finish.second;
        
        while(prev!=0){
            path.push_back(curr);
            int beforeprev = parent[prev][curr];
            curr = prev;
            prev = beforeprev;
        }
        
        path.push_back(1);
        reverse(path.begin(), path.end());
        
        cout << path.size()-1 << '\n';
        
        for(int city : path){
            cout << city << ' ';
        }
        cout << '\n';
	    
	//}
	
	return 0;
	

}
