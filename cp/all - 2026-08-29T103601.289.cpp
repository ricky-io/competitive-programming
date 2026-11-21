#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    a = llabs(a), b = llabs(b);
    while(b!=0){
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a(n+1);
	    
	    for(int i=1; i<=n; i++){
	        int x;
	        
	        cin >> x;
	        
	        a[i] = abs(x - i);
	    }
	    
	    long long k = gcd(a[1], a[2]);
	    
	    for(int i=3; i<=n; i++){
	        k = gcd(k, a[i]);
	    }
	    
	    cout << k << endl;
	    
	    
	}

}
