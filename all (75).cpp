#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    int one = 0;
	    int zero = 0;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        if(x == 1) one++;
	        if(x == 0) zero++;
	    }
	    
	    if(zero == 0) {
	        cout << one << endl;
	        continue;
	    }
	    
	    int ans = (2 << zero-1) * one;
	    
	    cout << ans << endl;
	}

}
