#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    if(n%6 != 0 && n&4 != 0) {
	        cout << -1 << "\n";
	    }
	    
	    else{
	        long long mn = n/6 + (n%6)/4;
	        long long mx = n/4;
	        
	        cout << mn <<" " << mx << endl;
	    }
	    
	}
	
	return 0;

}
