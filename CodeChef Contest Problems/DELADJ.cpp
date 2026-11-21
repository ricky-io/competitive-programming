#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    priority_queue<int> pq;
	    int total = 0;
	    int pls = 0;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        total += x;
	        pq.push(x);
	        if(i%2 == 0) {
	            pls += pq.top();
	            pq.pop();
	        }
	        
	    }
	    
	    cout << 2*pls - total << '\n';
	}

}
