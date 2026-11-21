#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    ll x, n;
	    cin >> x >> n;
	    
	    
	    if(n%4 == 0){
	    }
	    
	    else if(n%4 == 1){
	        if(x%2 == 0) x -= n;
	        else x += n;
	    }
	    
	    else if(n%4 == 2){
	        if(x%2 == 0) x += 1;
	        else x -= 1;
	    }
	    
	    else {
	        if(x%2 == 0) x += n + 1;
	        else x -= n - 1;
	    }
	    
	    cout << x << '\n';
	}
	
	return 0;

}
