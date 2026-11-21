#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> cities;

void dfs(int node, vector<bool>& vis) {
    vis[node] = true;

    for (int neighbor : cities[node]) {
        if (!vis[neighbor]) {
            dfs(neighbor, vis);
        }
    }
}

int main() {
    int n;
    cin >> n;

    cities.resize(n+1);

    int m;
    cin >> m;

    while (m--) {
        int u, v;
        cin >> u >> v;

        cities[u].push_back(v);
        cities[v].push_back(u);
    }

    vector<bool> vis(n+1, false);
    vector<int> road;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            road.push_back(i);
            dfs(i, vis);
        }
    }

    cout << road.size() - 1 << endl;
    
    for(int i=1; i<road.size(); i++){
        
        cout << road[i-1] << " " << road[i] << endl;
        
    }
    

    return 0;
}