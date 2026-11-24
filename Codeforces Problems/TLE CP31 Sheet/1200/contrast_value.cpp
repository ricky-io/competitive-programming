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

		int ans = 1;
		int last = 0;

		for(int i=1; i<n; i++){
			if(a[i] == a[i-1]) {
				continue;
			}

			int curr;

			if(a[i] > a[i-1]){
				curr = 1;
			}

			else curr = -1;

			if(last != curr){
				last = curr;
				ans++;
			}
		}

		cout << ans << '\n';
	}

    return 0;

}
