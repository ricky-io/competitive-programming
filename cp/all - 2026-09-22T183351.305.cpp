#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    set<int> s;
	    
	    for(int i=1; i<=n; i++){
	        int x;
	        cin >> x;
	        
	        s.insert(x-i);
	    }
	    
	    int ans = 0;
	    int current = 0;
	    int prev = INT_MIN;
	    
	    for(int x : s){
	        if(x == prev + 1) current++;
	        else current = 1;
	        
	        ans = max(ans, current);
	        prev = x;
	    }
	    
	    cout << ans << endl;
	}
	
	return 0;

}
