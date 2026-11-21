#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin >> t;
	
	while(t--){
	    int n, m, k;
	    cin >> n >> m >> k;
	    
	    if(k > m) cout << "NO" << endl;
	    
	    else{
	        cout << "YES" << endl;
	        for(int i=0; i<n; i++){
	            cout << (i % k == 0 ? m-k+1 : 1) << " ";
	        }
	    }
	    cout << endl;
	}

}
