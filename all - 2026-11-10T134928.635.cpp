#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	// your code goes here
	int n, q;
	cin >> n >> q;
	
	map<int, int> mp;
	for(int i=1; i<=n; i++){
	    int x;
	    cin >> x;
	    
	    if(mp[x] == 0) mp[x] = i;
	}
	
	for(int i=0; i<q; i++){
	    int x;
	    cin >> x;
	    
	    int pos = mp[x];
	    
	    cout << pos << ' ';
	    
	    for(auto &[u, v] : mp){
	        if(v <= pos) v++;
	    }
	    
	    mp[x] = 1;
	}
	
	cout << '\n';

}
