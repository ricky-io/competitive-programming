#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        x %= k;
	        a[i] = x;
	        if(a[i] == 0) cout << i+1 << " ";
	    }
	    
	    for(int i=0; i<n; i++){
	        if(a[i] > 0) cout << i+1 << " ";
	    }
	    
	    cout << endl;
	    
	}

}
