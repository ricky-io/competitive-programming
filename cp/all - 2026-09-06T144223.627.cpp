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
    	
        int diff = a[n-1] - a[1];
        
        for(int i=n-1; i>=0; i--){
            diff = max(diff, a[n-1] - a[i]);
        }
        
        for(int i=n-1; i>0; i--){
            diff = max(diff, a[i] - a[i-1]);
        }
        
        for(int i=2; i<n; i++){
            diff = max(diff, a[i] - a[0]);
        }
        
        if(n == 1) diff = 0;
        
        cout << diff << "\n";
    }

	return 0;

}
