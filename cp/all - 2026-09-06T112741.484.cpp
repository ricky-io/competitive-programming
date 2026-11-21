#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long y, x;
	    
	    cin >> y >> x;
	    
	    long long ele = 0;
	    
	    if(y > x){
	        if(y%2 == 0){
	            ele = y*y  - (x-1);
	        }
	        else {
	            y-=1;
	            ele = y*y + (x-1);
	        }
	    }
	    
	    else{
	        if(x%2 != 0){
	            ele = x*x - (y-1);
	        } else {
	            x-=1;
	            ele = x*x + (y);
	        }
	    }
	    
	    cout << ele << "\n";
	}
	
	return 0;

}
