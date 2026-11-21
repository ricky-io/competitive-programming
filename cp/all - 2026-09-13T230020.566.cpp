#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n+1);
	    
	    vector<int> s;
	    
	    for(int i=1; i<=n; i++){
	        cin >> a[i];
	        
	        if(a[i] != i) s.push_back(a[i]);
	    }
	    
	    reverse(s.begin(), s.end());
	    
	    bool ans = true;
	    
	    for(int l=1; l<s.size(); l++){
	        if(s[l] < s[l-1]) ans = false;
	    }
	    
	    cout << (ans ? "YES" : "NO") << endl;
	    
	}

}
