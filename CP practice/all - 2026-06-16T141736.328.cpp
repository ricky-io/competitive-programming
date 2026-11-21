#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n , k;
	    cin>>n>>k;
	    map<int,long long> mp;
        
        for(int i=0;i<k;i++){
            int b,c;
            cin>>b>>c;
            mp[b] += c;
        }
	    
	    vector<long long> sums;

        for (auto &p : mp) {
            sums.push_back(p.second);
        }
        
        sort(sums.rbegin(), sums.rend());

        long long ans = 0;

        for (int i = 0; i < min((int)sums.size(), n); i++) {
            ans += sums[i];
        }

        cout << ans << '\n';
    }
	    
return 0;
}
