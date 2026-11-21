#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    bool ans = false;
	    
	    int sum = std::accumulate(a.begin(), a.end(), 0);
	    
	    sum = abs(sum);
	    
	    if(sum == 0 || sum%4 == 0) ans = true;
	    
	    if(ans) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}

}
