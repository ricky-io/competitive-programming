#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x, y;
	    cin >> n >> x >> y;
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    int pairs = 0;
	    for(int i=0; i<n-1; i++){
	        for(int j = i+1; j<n; j++){
	            if((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0) pairs++;
	        }
	    }
	    
	    cout << pairs << endl;
	}

}
