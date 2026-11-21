#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<pair<int, int>> a(n);
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        x %= k;
	        a[i].first = x;
	        a[i].second = i+1;
	        if(a[i].first == 0) cout << i+1 << " ";
	    }
	    
	    sort(a.begin(), a.end(), [](const auto& p1, const auto& p2) { return p1.first > p2.first; });
	    
	    
	    
	    for(int i=0; i<n; i++){
	        if(a[i].first > 0) cout << a[i].second << " ";
	    }
	    
	    cout << endl;
	    
	}

}
