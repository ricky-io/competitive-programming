#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
    	int n;
    	cin >> n;
    	
    	vector<int> a(n);
    	
    	for(int i=0; i<n; i++){
    	    cin >> a[i];
    	}
    	
        int diff = INT_MIN;
        
        for(int i=0; i<n; i++){
            diff = max(diff, a[(i-1+n) % n] - a[i]);
        }
        
        for(int i=1; i<n; i++){
            diff = max(diff, a[i] - a[i]);
        }
        
        for(int i=0; i<n; i++){
            diff = max(diff, a[n-1] - a[i]);
        }
        
        cout << diff << "\n";
    }

	return 0;

}
