#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	    int n;
	    cin >> n;
	    
	    vector<ll> a(n);
	    
	    ll s = 0;
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        s ^= a[i];
	    }
	    
	    for(int i=0; i<n; i++) cout << (s ^ a[i]) <<" ";
	    
	    cout << endl;
	    
	    
}
