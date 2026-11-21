#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, q;
	    cin >> n >> q;
	    
	    vector<int> a(n);
	    vector<int> x(q);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    for(int i=0; i<q; i++){
	        int b;
	        cin >> b;
	        
	        int y = pow(2, b);
	        x[i] = y;
	    }
	    
	    sort(a.begin(), a.end());
	    sort(x.rbegin(), x.rend());
	    
	    stack<int> st;
	    int i=0;
	    while(i < q) st.push(x[i++]);
	    
	    int mx = *std::max_element(a.begin(), a.end());
	    
	    while(!st.empty()){
	        if(st.top() > mx) break;
	        
	        for(int i=0; i<n; i++){
	            if(a[i] % st.top() == 0) a[i] += st.top()/2;
	        }
	        
	        st.pop();
	    }
	    
	    for(int i=0; i<n; i++){
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
