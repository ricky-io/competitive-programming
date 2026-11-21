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
	    
	    vector<int> st;
	    vector<bool> print(n+1, false);
	    
	    for(int i=0; i<n; i++){
	        if(s[i] == '1'){
	            st.push_back(i+1);
	        }
	        else if(s[i] == '2'){
	            if(!st.empty()){
	                st.pop_back();
	                print[i+1] = true;
	            }
	        }
	    }
	    
	    for(int x : st) print[x] = true;
	    
	    vector<int> res;
	    
	    for(int i=1; i<=n; i++){
	        if(print[i]) res.push_back(i);
	    }
	    
	    cout << res.size() << '\n';
	    
	    for(size_t i=0; i<res.size(); i++){
	        if(i) cout << ' ';
	        cout << res[i];
	    }
	    cout << '\n';
	}

}
