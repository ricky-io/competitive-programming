#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    stack<char> st;
	    
	    for(auto c : s){
	        if(!st.empty() && c == st.top()){
	            st.pop();
	        }
	        else {
	            st.push(c);
	        }
	    }
	    
	    cout<<(st.empty() ? "Yes" : "No")<<endl;
	}
	return 0;

}
