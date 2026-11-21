#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, x, y;
	    cin >> n >> x >> y;
	    
	    int z = lcm(x, y);
	    
	    int cnx = n / x;
	    int cny = n / y;
	    int cnz = n / z;
	    
	    cnx -= cnz;
	    cny -= cnz;
	   
	    int neg = (cny * (cny + 1))/2;
	    
	    int pos = 0;
	    while(cnx--){
	        pos += n;
	        n--;
	    }
	    
	    int ans = pos - neg;
	    cout << ans << endl;
	}

}

