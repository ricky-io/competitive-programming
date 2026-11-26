#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
        cin >> n;

        vector<int> a(n+1);
        for(int i=1; i<=n; i++) cin >> a[i];

        int i = 1;
        int j = n;
        int l = 1;
        int r = n;

        bool mila = false;
        int ans_l , ans_r;

        while(i < j){
            if(a[i]==l){
                i++;
                l++;
            }
            else if(a[i] == r){
                i++;
                r--;
            }

            else if(a[j]==l){
                j--;
                l++;
            }
            else if(a[j] == r){
                j--;
                r--;
            }

            else {
                mila = true;
                ans_l = min(i, j);
                ans_r = max(i, j);
                break;            
            }

        }

        if(mila){
            cout << ans_l <<" " << ans_r << '\n';
        }
        else cout << -1 << '\n';
	}

    return 0;

}
