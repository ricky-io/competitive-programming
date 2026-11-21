#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &parent, int a){
    return parent[a] = ((parent[a] == a) ? a : find(parent, parent[a]));
}

void Union(vector<int> &par, vector<int> &rank, int a, int b){
    a = find(par, a);
    b = find(par, b);
    
    if(a == b) return;
    
    if(rank[a] > rank[b]) {
    par[b] = a;
    }
    else if(rank[a] < rank[b]) {
        par[a] = b;
    }
    else {
        par[b] = a;
        rank[a]++;
    }
}

struct Edge {
    int src;
    int dest;
    int wt;
};

bool cmp(Edge e1, Edge e2){
    return e1.wt < e2.wt;
}

long long kruskals(vector<Edge> &input, int n){
    
    sort(input.begin(), input.end(), cmp);
    
    vector<int> parent(n+1);
    vector<int> rank(n+1, 1);
    
    for(int i=0; i<=n; i++){
        parent[i] = i;
    }
    
    int edgeCount = 0; //n-1
    int i=0;
    long long ans = 0;
    while(edgeCount < n-1 and i < input.size()){
        Edge curr = input[i];
        
        int srcPar = find(parent, curr.src);
        int destpar = find(parent, curr.dest);
        
        if(srcPar != destpar){
            // include edge as this will not make cycle
            Union(parent, rank, srcPar, destpar);
            ans += curr.wt;
            edgeCount++;
        }
        i++; 
        // doesn't matter u picked it or not we still need to go to next edge.
    }

    return ans;
}

int main() {
	
	int n, e;
	cin>>n>>e;
	vector<Edge> v(e);
	
	for(int i=0; i<e; i++){
	    cin>>v[i].src>>v[i].dest>>v[i].wt;
	}
	cout<<kruskals(v, n)<<endl;
	return 0;

}
