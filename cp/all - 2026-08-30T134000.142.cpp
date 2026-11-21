#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, x, y;
	    cin >> n >> x >> y;
	    
	    int cnx = 0;
	    int cny = 0;
	    for(int i=1; i<=n; i++){
	        if(i % x == 0 && i % y == 0) continue;
	        
	        if(i % x == 0) cnx++;
	        else if(i % y == 0) cny++;
	    }
	    int neg = (cny * (cny + 1))/2;
	    
	    int pos = 0;
	    for(int i = n; cnx > 0; i--, cnx--){
	        pos += i;
	    }
	    
	    int ans = pos - neg;
	    cout << ans << endl;
	}

}
