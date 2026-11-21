#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    ll one = 0;
	    ll zero = 0;
	    
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
	    
	    ll ans = (2LL << zero-1LL) * one;
	    
	    cout << ans << endl;
	}

}
