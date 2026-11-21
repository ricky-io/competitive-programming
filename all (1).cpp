#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    int ops = 0;
	    
	    while(n >= 1){
	        
	        if(n == 1){
	            cout << ops << endl;
	            break;
	        }
	        
	        if(n == 3){
    	        ops += 2;
    	        cout << ops << endl;
    	        break;
    	    }
	        
	        if(n < 6){
    	        cout << -1 << endl;
    	        break;
    	    }
    	    
    	    if(n%6 == 0){
	            n /= 6;
	            ops++;
	        }
    	    
    	    else {
    	        n *= 2;
	            ops++;
    	    }
    	    
	       
	    }
	    
	}

}
