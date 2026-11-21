#include <bits/stdc++.h>
using namespace std;

// B wrong approach

int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    long long x, y, k;
	    cin >> x >> y >> k;
	    
	    long long sum = 0;
	    
	    while(k--){
	        long long d = y % x;
	        
	        sum += d;
	        
	        y++;
	        x++;
	        
	        if(d == 0) break;
	    }
	    
	    if(k>=0) {
	        long long m = (y % x) * k;
	        sum += m;
	    }
	    
	    cout << sum << endl;
	    
 	}
 	
 	return 0;

}

// 999898177699820694
