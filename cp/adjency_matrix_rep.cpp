#include <bits/stdc++.h>
using namespace std;

// Adjecy Matrix implementation of Graphs

int v;
vector<vector<int>> graph;

void add_edge(int src, int dest, int weight, bool bi_der = true){
    if(src < 0 || src >= graph.size() ||
       dest < 0 || dest >= graph.size()){
        cout << "Invalid vertex\n";
        return;
    }
    
    graph[src][dest] =  weight;
    if(bi_der){
        graph[dest][src] = weight;
    }
}

void display() {

    cout << setw(4) << " ";
    for (int j = 0; j < v; j++)
        cout << setw(4) << j;
    cout << "\n";

    for (int i = 0; i < v; i++) {
        cout << setw(4) << i;
        for (int j = 0; j < v; j++)
            cout << setw(4) << graph[i][j];
        cout << "\n";
    }
}



int main() {
	cin>>v; // enter no of vertices
	
	graph.resize(v, vector<int> (v, 0));
	
	int e;
	cin>>e;
	
	while(e--){
	    int s, d, wt;
	    cin>>s>>d>>wt;
	    
	    add_edge(s, d, wt);
	}
	
	cout<<"  Adjency Matrix Representation"<<endl;
	cout<<"--------------------------------"<<endl;
	display();
	
	return 0;

}
