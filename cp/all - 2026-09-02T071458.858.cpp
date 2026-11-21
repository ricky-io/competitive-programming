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
	    
	    while(i < n){
	        if(st.count(s[i])){
	            cnt = i;
	            set<char> s2;
	            while(i < n){
	                s2.insert(s[i]);
	                i++;
	            }
	            cnt += s2.size();
	            break;
	        }
	        else{
	            st.insert(s[i]);
	            i++;
	        }
	    }
	    
	    cout << cnt << endl;
	    
	
	
	}
	return 0;

}
