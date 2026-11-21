#include <bits/stdc++.h>
using namespace std;

int query(vector<vector<int>>& hp, int q){
    int s = hp.size();
    int p = hp[s-1][1] - q;
    int item = hp[s-1][2];
    for(int i = s-1; i>=0; i--){
        if(hp[i][1] >= p) item = hp[i][2];
        else break;
    }
    return item;
}

int main() {
	int n;
	cin>>n;;
	vector<vector<int>> hp(n, vector<int> (3));
	for(int i=0; i<n; i++){
	    cin>>hp[i][0]>>hp[i][1];
	}
	// making a third column for storing max 
	hp[n-1][2] = hp[n-1][0];

    for(int i=n-2;i>=0;i--){
        hp[i][2] = max(hp[i][0], hp[i+1][2]);
    }
    
    
	long long q;
	cin>>q;
	while(q--){
	    int z;
	    cin>>z;
	    cout<<query(hp, z)<<endl;
	}
 return 0;
}
