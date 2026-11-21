#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    } 
	    
	    int mx = a[0];
	    
	   for(int i=1; i<n; i++){
	        mx = mx&a[i];
	    }
	    
	    cout << mx << endl;
	    
	    
	}

}
