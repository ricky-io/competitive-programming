#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long n, x, y;
	    cin >> n >> x >> y;
	    
	    long long z = lcm(x, y);
	    
	    long long cnx = n / x - n/z;
	    long long cny = n / y - n/z;
	   
	    long long neg = cny * (cny + 1) / 2;
	    
	    long long pos = cnx *(2*n - cnx + 1) / 2;
	    
	    cout << pos - neg << endl;
	}

}

