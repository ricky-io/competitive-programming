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
	    int i = 0;
	    
	    while(i < n){
	        if(!st.empty() && st.count(s[i])){
	            int j = i;
	            unordered_set<char> s2;
	            while(j < n){
	                s2.insert(s[j]);
	                j++;
	            }
	            int cnt = st.size()+s2.size();
	            ans = max(ans, cnt);
	            i++;
	            
	        }
	        else{
	            st.insert(s[i]);
	            i++;
	        }
	    }
	    
	    cout << ans << endl;
	    
	}
	return 0;
 
}