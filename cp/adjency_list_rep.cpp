#include <bits/stdc++.h>
using namespace std;

// Adjency list implementation of Graphs

int v;
vector<list<pair<int, int>>> graph;

void add_edge(int src, int dest, int weight, bool bi_der = true){
    if(src < 0 || src >= graph.size() ||
       dest < 0 || dest >= graph.size()){
        cout << "Invalid vertex\n";
        return;
    }
    
    graph[src].push_back({dest, weight});
    if(bi_der){
        graph[dest].push_back({src, weight});
    }
}

void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<< "--->";
        for(auto el : graph[i]){
            cout << "(" << el.first << ", " << el.second << ") ";
        }
        cout<<endl;
    }
    cout<<endl;
}



int main() {
	cin>>v; // enter no of vertices
	
	graph.resize(v+1, list<pair<int, int>>());
	
	int e;
	cin>>e;
	
	while(e--){
	    int s, d, wt;
	    cin>>s>>d>>wt;
	    
	    add_edge(s, d, wt);
	}
	
	cout<<"Adjency list representation"<<endl;
	
	display();
	
	return 0;

}
