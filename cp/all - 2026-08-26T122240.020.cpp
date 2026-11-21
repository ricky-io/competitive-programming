#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, q;
	    cin >> n >> q;
	    
	    vector<int> a(n+1);
	    vector<int> b(n+1, 0);
	    
	    for(int i=1; i<=n; i++) cin >> a[i];
	    for(int i=1; i<=n; i++){
	        int x;
	        cin >> x;
	        b[i] = max(b[i-1], x);
	    }
	    
	    int i=1; int sum = a[1]; q--;
	    
	    while(i <= n && q > 0){
	        if(a[i+1] >= b[i]){
	            sum += a[i+1];
	            i++;
	        }
	        else {
	            sum += b[i];
	        }
	        q--;
	    }
	    
	    cout << sum << endl;
	}

}
