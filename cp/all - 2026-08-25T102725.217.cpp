#include <bits/stdc++.h>
using namespace std;



int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    if(n%2 == 1) cout << 1 << endl;
	    
	    else {
	        
	        int curr = 2;
	        int best = 2;
	        
	       for(int i=3; i<=42; i++){
	           if(n % i == 0) curr++;
	           
	           else curr = 0;
	           
	           best = max(best, curr);
	       }
	       
	       cout << best << endl;
	    }
	}
	
	return 0;

}
