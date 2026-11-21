#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int n;
	cin >> n;
	
	vector<int> a(n);
	
	for(int i=0; i<n; i++) cin >> a[i];
	
	
	for(int mask = 0; mask<(1<<n); mask++){
	    int sum = 0;
	    for(int bit = 0; bit < n; bit++){
	        if((mask & (1<<bit)) != 0) sum += a[bit];
	        else sum -= a[bit];
	    }
	    if(sum % 360 == 0) {
	        cout << "YES" << endl;
	        return 0;
	    }
	}
	cout << "NO" << endl;
	
	return 0;

}
