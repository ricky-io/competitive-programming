#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    if(n%6 != 0 && n&4 != 0 || n < 4) {
	        cout << -1 << "\n";
	    }
	    
	    else{
	        long long mn = n/6;
	        if(n%6 > 1) mn++;
	        long long mx = n/4;
	        
	        cout << mn <<" " << mx << endl;
	    }
	    
	}
	
	return 0;

}
