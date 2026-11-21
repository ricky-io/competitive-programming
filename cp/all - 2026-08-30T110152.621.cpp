#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> c(2*n);
	    
	    for(int i=0; i<2*n; i++) cin >> c[i];
	    
	    
	    int curr = 1;
	    int best = 1;
	    
	    for(int r=1; r<2*n; r++){
	        if(c[r] == c[r-1]) curr++;
	        else curr = 1;
	        
	        best = max(curr, best);
	    }
	    
	    cout << best << endl;
	    
	}

}
