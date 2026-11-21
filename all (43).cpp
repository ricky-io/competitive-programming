#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    int m = (n*(n-1))/2;
	    
	    vector<int> b(m);
	    
	    for(int i=0; i<m; i++) cin >> b[i];
	    
	    sort(b.begin(), b.end());
	    
	    set<int> ab;
	    vector<int> a;
	    int r = b[0];
	    for(auto x : b){
	        ab.insert(x);
	        r = x;
	    }
	    
	    for(auto x : ab) a.push_back(x);
	    
	   // if(ab.size() == 1){
	   //     while(a.size() < n) a.push_back(r);
	   // }
	    
	    while(a.size() < n) a.push_back(r+1);
	    
	    for(auto y : a){
	        cout << y << " ";
	    }
	    cout << '\n';
	    
	}

}
