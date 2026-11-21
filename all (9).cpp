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
	    ll mx_odd = -1LL;
	    
	    for(int i=0; i<n; i++){
	        ll x;
	        cin >> x;
	        
	        if(x % 2 == 1) mx_odd = max(mx_odd, x);
	        else evens.push(x);
	    }
	    
	    int ops = 0;
	    
	    if(mx_odd == -1LL){
	        cout << 0LL << endl;
	        continue;
	    }
	    
	    bool flag  = false;
	    
	    while(!evens.empty()){
	        
	        ll y = evens.top();
	        evens.pop();
	        
	        if(mx_odd > y){
	            ops++;
	        }
	        
	        else{
	            ops++;
	            flag = true;
	        }
	        mx_odd += y;
	    }
	    
	    if(flag) ops++;
	    cout << ops << endl;
	    
	}
	
	return 0;
 
}