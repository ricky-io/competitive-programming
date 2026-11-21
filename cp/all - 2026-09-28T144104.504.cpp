#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    bool ans = false;
	    
	    if(n == 1)  ans = false;
	    else if(n == 2 && abs(a[0]-a[1]) == 1) ans = false;
	    
	    else{
	        // lets odd are tips
	        bool odds = true;
	        for(int i=1; i<n; i+=2){
	            if(a[i] <= a[i-1]) odds = false;
	        }
	        
	        // lets even are tips;
	        bool even = true;
	        if(a[0] <= a[1]) even = false;
	        for(int i=2; i<n; i+=2){
	            if(a[i] <= a[i-1]) even = false;
	        }
	        
	        if(odds || even) ans = true;
	    }
	    
	    if(ans) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}

}
