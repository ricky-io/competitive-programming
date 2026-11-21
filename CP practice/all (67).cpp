#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

// Adjency list : --> DFS traverse

vector<list<int>> graph;
unordered_set<int> visited;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end){
    if(curr == end) return true;
    visited.insert(curr); // mark visited
    for(auto neighbour: graph[curr]){
        if(not visited.count(neighbour)){
            bool result = dfs(neighbour, end);
            if(result) return true;
        }
    }
    return false;
    
}

bool anypath(int src, int dest){
    return dfs(src, dest);
}

void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" --> ";
        for(auto el : graph[i]){
            cout<<el<<" , ";
        }
        cout<<"\n";
    }
}

int main() {
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d); // (s, d, false) to make it weighted graph
    }
    display();
    
    int x, y;
    cin>>x>>y;
    cout<<anypath(x, y)<<" \n";
    
    return 0;
}

// 7
// 8
// 0 1
// 0 4
// 1 3
// 4 3
// 1 5
// 5 6
// 6 2
// 5 2
// 0 6
