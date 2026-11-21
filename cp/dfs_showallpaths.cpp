#include <bits/stdc++.h>
using namespace std;

// DFS traversals showing all possible paths in Graph :

int v;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;

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

void display(){
    for(int i=0; i<graph.size()-1; i++){
        cout<<i<< "--->";
        for(auto el : graph[i]){
            cout << "(" << el << ") ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void dfs(int curr, int end, vector<int>& path){
    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    
    visited.insert(curr);
    path.push_back(curr);
    
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void all_path(int src, int dest){
    vector<int> v;
    visited.clear();
    result.clear();
    return dfs(src, dest, v);
}

void show_all_paths(){
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
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
	
	cout<<"All paths DFS traversals"<<endl;
	
	//display();
	
	all_path(0, 6);
	
	show_all_paths();
	
	return 0;

}