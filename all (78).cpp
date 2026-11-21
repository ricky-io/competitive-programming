#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    priority_queue<int> pq;
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        pq.push(a[i]);
	    } 
	    sort(a.begin(), a.end());
	    
	    int mn = a[0];
	    int mx = a[n-1];
	    
	    while(!pq.empty()){
	        int x = pq.top();
	        pq.pop();
	        
	        for(int i=0; i<n; i++){
	            int y = x&a[i];
	            
	            mx = min(mx, y);
	            mn = max(mn, y);
	        }
	    }
	    
	    cout << mx << endl;
	   // cout << mn << endl;
	    
	    
	}

}
