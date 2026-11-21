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
	    
	    int ex = abs(a-b);
	    
	    int g = gcd(a, b);
	    
	    int moves = min(a%g, g - a%g);
	    
	    cout << ex << ' ' << moves << '\n';
	    
	}
	
	return 0;

}
