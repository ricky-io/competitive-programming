#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isPrime(int x){
    if(x < 2) return false;
    
    for(int i=2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    
    return true;
}

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int d;
	    cin >> d;
	    
	    int p = d+1;
	    
	    while(!isPrime(p)) p++;
	    
	    int q = p+d;
	    
	    while(!isPrime(q)) q++;
	    
	    cout << p*q << '\n';
	}
	
	return 0;
}
