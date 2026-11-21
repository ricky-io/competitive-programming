#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    int c = 0;
	    
	    for(int i=0; i<n; i++) {
	        int x;
	        cin >> x;
	        
	        c += x;
	    }
	    
	    if(c * 2 >= n) cout << "Bessie" << endl;
	    else cout << "Elsie" << endl;
	}
	
	return 0;

}
