#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    ll x, y, k;
	    cin >> x >> y >> k;
	    
	    ll req_sticks = y*k + k - 1;
	    ll trades = ((k*y + k-1) + (x-1) - 1)/(x-1) + k;
	    
	    cout << trades << '\n';
	}
	
	return 0;

}
