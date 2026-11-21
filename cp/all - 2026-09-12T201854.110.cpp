#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    stack<int> st;
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        
	        st.push(x);
	    }
	    
	    int i = 0;
	    
	    while(i < n-1){
	        if(i % 2 == 0){
	            int x = st.top();
    	        st.pop();
    	        int y = st.top();
    	        st.pop();
    	        
    	        int z = max(x, y);
    	        st.push(z);
	        }
	        
	        else {
	            int x = st.top();
    	        st.pop();
    	        int y = st.top();
    	        st.pop();
    	        
    	        int z = min(x, y);
    	        st.push(z);
	        }
	        i++;
	        if(st.size() == 1) break;
	    }
	    
	    if(st.top() == 1) cout << "Bessie" << endl;
	    else cout << "Elsie" << endl;
	    
	}
	
	return 0;

}
