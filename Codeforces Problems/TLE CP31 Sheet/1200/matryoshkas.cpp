#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        map<int, int> mp;
        for(int i=0; i<n; i++) mp[a[i]]++;

        int ans = 0;
        int last = 0;
        int prev = -2;

        for(auto &[x, y] : mp){
            if(x - prev != 1){
                last = 0;
            }
            if(y > last){
                ans += y-last;
               
            }
            last = y;
            prev = x;

        }

        cout << ans << '\n';

        

		
	}

    return 0;

}
