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
	   // for(int i=0; i<n; i++){
	   //     st.insert(s[i]);
	   // }
	    
	    int cnt = 0;
	    int i = 0;
	    
	    while(i < n-1){
	        if(!st.count(s[i])){
	            st.insert(s[i]);
	            i++;
	        } 
	        else break;
	    }
	    cnt = i;
	    unordered_set<char> s2;
	    while(i < n){
	       s2.insert(s[i]);
	       i++;
	    }
	    
	    cnt += s2.size();
	    
	    cout << cnt << endl;
	    
	}
	return 0;

}
