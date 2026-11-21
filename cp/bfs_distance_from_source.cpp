#include <bits/stdc++.h>
using namespace std;

// BFS traversals showing all distances between every two vertices in Graph :

int v;
vector<list<int>> graph;
void add_edge(int src, int dest, bool bi_der = true){
    if(src < 0 || src >= graph.size() ||
       dest < 0 || dest >= graph.size()){
        cout << "Invalid vertex\n";
        return;
    }
    
    graph[src].push_back(dest);
    if(bi_der){
        graph[dest].push_back(src);
    }
}


void bfs(int src, vector<int> &dist){
    queue<int> qu;
    vector<bool> visited(v, false);
    
    dist.assign(v, INT_MAX);
    
    qu.push(src);
    visited[src] = true;
    dist[src] = 0;
    
    while(!qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neighbour : graph[curr]){
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                dist[neighbour] = dist[curr] + 1;
                qu.push(neighbour);
            }
        }
        
    }
    
    for(int i=0; i<dist.size(); i++){
        cout<<i<<" "<<dist[i]<<endl;
    }
}



int main() {
	cin>>v; // enter no of vertices
	
	graph.resize(v, list<int>());
	
	int e;
	cin>>e;
	
	while(e--){
	    int s, d;
	    cin>>s>>d;
	    
	    add_edge(s, d);
	}
	
	cout<<" Showing the distance between all the  vertices from the src :- "<<endl;
	
	vector<int> dist;
	
    bfs(0, dist);
	
	return 0;

}


// INPUTS

// 7 8
// 0 1
// 0 4
// 1 3
// 1 5
// 3 4
// 5 6
// 5 2
// 6 2
