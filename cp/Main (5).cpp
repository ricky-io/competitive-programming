#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    int cnt = 0;
	    
	    for(int i=n-1; i>0; i--){
	        if(a[i-1] >= a[i]) {
	            while(a[i-1] >= a[i] && a[i-1] != 0){
	                a[i-1]/=2;
	                cnt++;
	            }
	        }
	        if(a[i] == a[i-1] && a[i] == 0){
	            cnt = -1;
	            break;
	        }
	    }
	    cout << cnt << endl;
	}

}
