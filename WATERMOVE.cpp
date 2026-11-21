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
	    
	    sort(a.begin(), a.end());
	    
	    int mn_sum = INT_MAX;
	    
	    for(int i=0; i<n-1; i++){
	        for(int j=i+1; j<n; j++) mn_sum = min(mn_sum, a[i]+a[j]);
	    }
	    
	    int mn = *std::max_element(a.begin(), a.end());
	    
	    cout << max(mn, mn_sum) << endl;
	}

}
