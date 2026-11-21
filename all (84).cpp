#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    ll a, b;
	    cin >> a >> b;
	    if(a == b){
	        cout << 0 << ' ' << 0 << '\n';
	        continue;
	    }
	    
	    ll g = abs(a-b);
	    
	    ll moves = min(a%g, g - a%g);
	    
	    cout << g << ' ' << moves << '\n';
	    
	}
	
	return 0;

}
