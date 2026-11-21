#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    int y = 0;
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        y += a[i];
	    }
	    
	    bool ok = false;
	    for(int i=0; i<n; i++){
	        if(y == a[i]*n) {
	            ok = true;
	            break;
	        }
	    }
	    
	    cout << (ok ? "Yes" : "No") << endl;
	}

}
