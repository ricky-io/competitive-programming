#include <bits/stdc++.h>
using namespace std;

// DFS traversals is any path exists in Graph :

int v;
vector<list<int>> graph;
unordered_set<int> visited;

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

bool any_path(int curr, int end){
    if(curr == end) return true;
    
    visited.insert(curr);
    
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){
            bool result = any_path(neighbour, end);
            if(result) return true;
        }
    }
    return false;
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
	
	cout<<"Is any path exists between given two vertices :- ";
	
    cout<<(any_path(6, 7) ? "Yes" : "No");
	
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
