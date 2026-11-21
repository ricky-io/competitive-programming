#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> p;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        
	        if(x != i) p.push_back(x);
	    }
	    
	    int best = 0;
	    int curr = 0;
	    
	    for(int i=0; i<p.size()-1; i++){
	        curr = p[i] & p[i+1];
	        
	        best = max(curr, best);
	    }
	    
	    cout << best << endl;
	}
}
