#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int t;
	cin >> t;
	
	while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n+1);
        a[0] = 0;
        
        int cost = 0;
        
        for(int i=1; i<=n; i++){
            cin >> a[i];
            cost += a[i];
        }
        
        int cost2 = cost;
        
        sort(a.begin(), a.end());
        
        int i=1; int j=n; int p = k;
        
        while(i < j && p--){
            if(a[i] + a[i+1] <= a[j]) i+=2;
            else j--;
        }
        
        int sum = 0;
        
        for(int l=i; l<=j; l++) sum += a[l]; // sum of left elements
        for(int l=1; l<=2*k; l++) cost -= a[l]; // sum of total sum - all min_elements
        for(int l=n; l> n-k; l--) cost2 -= a[l]; // sum of total sum - all max_elements
        
        int ans = max({sum, cost, cost2});
        
        cout << ans << '\n';
        
	}

}
