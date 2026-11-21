#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    int f = 1 << (n-k+1);
	    int s = 2*(k-1);
	    
	    int ans = f+s;
	    
	    cout << ans << endl;
	}
	
	return 0;

}
