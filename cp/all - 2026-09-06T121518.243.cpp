#include <bits/stdc++.h>
using namespace std;

bool check(int l, int r, int k, long long sum, vector<int> &a){
    
    for(int i=l; i<=r; i++){
        sum += (a[i] - k);
    }
    
    if(sum % 2 == 0) return false;
    else return true;
}

int main() {
    int t;
    cin >> t;
    
    while(t--){
    	int n, q;
    	cin >> n >> q;
    	
    	long long sum = 0;
    	
    	vector<int> a(n+1);
    	
    	for(int i=1; i<=n; i++){
    	    cin >> a[i];
    	    sum += a[i];
    	} 
    	
    	while(q--){
    	    int l, r, k;
    	    cin >> l >> r >> k;
    	    cout << (check(l, r, k, sum, a) ? "YES" : "NO") << "\n";
    	}
    }

	
	return 0;

}
