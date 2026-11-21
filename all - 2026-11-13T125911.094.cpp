#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, c;
	    cin >> n >> c;
	    
	    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        
	        pq.push(x+i+1);
	    }
	    
	    int ans = 0;
	    
	    while(!pq.empty() && c > 0){
	        int x = pq.top();
	        pq.pop();
	        if(c >= x){
	            c -= x;
	            ans++;
	        }
	        else break;
	    }
	    
	    cout << ans << '\n';
	}

}
