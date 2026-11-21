#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    vector<int> b(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    for(int i=0; i<n; i++) cin >> b[i];
	    
	    int best = 1;
	    int i=0;
	    
	    while(i < n){
	        int curr = 1;
	        if(i != n-1 && a[i] == a[i+1]){
	            while(a[i] == a[i-1]){
	                i++; curr++;
	            }
	        } else curr = 1;
	        
	        int j = 0;
	        while(j < n){
	            if(a[i] == b[j]){
	                while(j < n && b[j++] == a[i]) curr++;
	            } else j++;
	        }
	        
	        best = max(best, curr);
	        i++;
	    }
	    
	    cout << best << endl;
	    
	    
	}

}
