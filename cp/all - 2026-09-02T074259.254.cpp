#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    string s;
	    cin >> s;
	    
	    unordered_set<char> st;
	    
	    int ans = 0;
	    for (int i = 0; i < n - 1; i++) { 
	        unordered_set<char> left; 
	        unordered_set<char> right; // Characters on the left 
	        for (int j = 0; j <= i; j++) { 
	            left.insert(s[j]); 
	            
	        } // Characters on the right 
	        for (int j = i + 1; j < n; j++) { 
	            right.insert(s[j]); 
	            
	        } 
	        int cnt = left.size() + right.size(); 
	        ans = max(ans, cnt); 
	        
	    }
	    
	    cout << ans << endl;
	    
	}
	return 0;
 
}