#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        
	    }
	    
	    int m = n-k+1;
	    
	    vector<bool> present(n+2, false);
	    
	    for(int i=0; i<m; i++){
	        present[a[i]] = true;
	    }
	    
	    int mex = 0;
	    
	    while(present[mex]) mex++;
	    
	    if(mex == m){
	        cout << -1 << endl;
	        continue;
	    }
	    
	    int i = 0;
	    
	    for(int p=0; p<m; p++){
	        if(a[p] > mex){
	            i=p;
	        }
	    }
	    
	    int j = -1;
	    
	    for(int p=m; p<n; p++){
	        if(a[p] == mex){
	            j = p;
	            break;
	        }
	    }
	    
	    cout << i+1 << " " << j+1 << endl;
	    
	}

}
