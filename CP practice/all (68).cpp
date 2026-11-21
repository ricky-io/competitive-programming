#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

// Adjency list : --> DFS traverse : All path

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int> &path){
    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); // mark visited
    path.push_back(curr);
    for(auto neighbour: graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
    
}

void allpath(int src, int dest){
    vector<int> v;
    return dfs(src, dest, v);
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
    allpath(x, y);
    for(auto path: result){
        for(auto el : path){
            cout<<el<<" ";
        }
        cout<<"\n";
    }
    
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


// T.C --> O(V+E)