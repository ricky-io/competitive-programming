#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    int score = 0;
	    
	    reverse(a.begin(), a.end());
	    if(n == k){
	        if(n == 1) score = a[0];
	        else score = a[0] + a[1];
	    }
	    else {
	        for(int i=0; i<=k; i++) score += a[i];
	    }
	    
	    cout << score << endl;
	}
	
	return 0;

}
