#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin >> t;
	
	while(t--){
	    int n, k, m;
	    cin >> n >> k >> m;
	    
	    if(k > m){
	        cout << "NO" << endl;
	        continue;
	    }
	    
	    cout << "YES" << endl;
	    for(int i=0; i<n; i++){
	            cout << (i % k == 0 ? m-k+1 : 1) << " ";
	    }
	    cout << endl;
	    }
	    
}
