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
	    
	    int curr = (1 << 30) - 1;
	    
	    for(int i=0; i<p.size(); i++){
	        curr &= p[i];
	        
	    }
	    
	    cout << curr << endl;
	}
}
