#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    string s;
	    cin >> s;
	    
	    string p;
	    cin >> p;
	    
	    map<int, int> mp;
	    
	    for(int i=0; i<k; i++) mp[p[i]]++;
	    
	    int curr = 0;
	    int prev = 0;
	    int best = 0;
	    
	    for(int i=0; i<n; i++){
	        if(mp[s[i]] > 0){
	            curr++;
	            prev = 0;
	        } 
	        
	        else {
	            curr = 0;
	            prev++;
	        }
	        
	        best = max({curr, best, prev});
	    }
	    
	    cout << best << endl;
	}
	

}
