#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x, y;
	    cin >> n >> x >> y;
	    
	    map<pair<long long, long long>, long long> cnt;
	    
	    int ans = 0;
	    
	    for(int i=0; i<n; i++){
	        int a;
	        cin >> a;
	        
	        int remx = a % x;
	        int remy = a % y;
	        
	        int needx = (x - a % x) % x;
	        int needy = remy;
	        
	        ans += cnt[{remx, remy}];
	        
	        cnt[{needx, needy}]++;
	    }
	    cout << ans << endl;
	}

}
