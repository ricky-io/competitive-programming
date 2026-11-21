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
	    
	    long long score = 0;
	    
	    int i=0; int m = n;
	    while(k <= m){
	        if(a[k-1] >= a[m-k]){
	            score += a[k-1];
	            a.erase(a.begin() + k-1);
	        } 
	        else{
	            score += a[m-k];
	            a.erase(a.begin() + m-k);
	        } 
	        
	        m--;
	    }
	    
	    cout << score << endl;
	}
	
	return 0;

}