#include <bits/stdc++.h>
using namespace std;

// Leetcode :- 1971

class Solution {
public:

    bool dfs(int curr, int dest, vector<vector<int>>& graph, vector<bool>& visited){
        if(curr == dest) return true; 
        visited[curr] = true;

        for(auto neighbour : graph[curr]){
            if(not visited[neighbour]){
                bool result = dfs(neighbour, dest, graph, visited);
                if(result) return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        vector<bool> visited(n,false);
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        return dfs(source,destination,graph,visited);
    }
};

int main() {
	// your code goes here

}
