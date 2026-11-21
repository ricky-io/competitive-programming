#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main() {
	int n, q;
	cin >> n >> q;
	
	vector<int> a(n+1, 0);
	for(int i=1; i<=n; i++) a[i] = i;
	
	while(q--){
	    int x;
	    
	    cin >> x;
	    
	    reverse(a.begin()+1, a.begin()+x+1);
	    for(int i=1; i<=x; i++) a[i] = -a[i];
	}
	
	for(int i=1; i<=n; i++) cout << a[i] << '\n';
	
	return 0;
}
