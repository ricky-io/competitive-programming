#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    int ops = 0;
	    
	    while(n >= 1LL){
	        
	        if(n == 1LL){
	            cout << ops << endl;
	            break;
	        }
	        
	        if(n == 3LL){
    	        ops += 2;
    	        cout << ops << endl;
    	        break;
    	    }
	        
	        if(n < 6LL){
    	        cout << -1 << endl;
    	        break;
    	    }
    	    
    	    if(n%6LL == 0LL){
	            n /= 6LL;
	            ops++;
	        }
    	    
    	    else {
    	        n *= 2LL;
	            ops++;
    	    }
    	    
	       
	    }
	    
	}

}
