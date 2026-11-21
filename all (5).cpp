#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    priority_queue<ll, vector<ll>, greater<ll>> evens;
	    ll mx_odd = -1;
	    
	    for(int i=0; i<n; i++){
	        ll x;
	        cin >> x;
	        
	        if(x % 2 == 1) mx_odd = max(x, mx_odd);
	        else evens.push(x);
	    }
	    
	    int ops = 0;
	    
	    if(mx_odd == -1LL){
	        cout << 0LL << endl;
	        continue;
	    }
	    
	    while(!evens.empty()){
	        
	        ll y = evens.top();
	        evens.pop();
	        
	        if(mx_odd > y){
	            ops++;
	        }
	        
	        else{
	            ops += 2LL;
	        }
	        mx_odd += y;
	    }
	    
	    cout << ops << endl;
	    
	}
	
	return 0;

}
