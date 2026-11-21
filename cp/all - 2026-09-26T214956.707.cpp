#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int> a(n+1);
	    a[0] = 0;
	    for(int i=1; i<=n; i++) cin >> a[i];
	    
	    int score = 0;
	    
	    int i=1; int m = n;
	    while(k <= m){
	        if(a[k] > a[m-k+1]){
	            score += a[k];
	            a.erase(a.begin() + k);
	        } 
	        else{
	            score += a[m-k+1];
	            a.erase(a.begin() + m-k+1);
	        } 
	        
	        m--;
	    }
	    
	    cout << score << endl;
	}
	
	return 0;

}
