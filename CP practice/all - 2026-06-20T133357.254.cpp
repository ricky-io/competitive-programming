#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    unordered_map<int, long long> mp;
	    for(int i=0; i<k; i++){
	        int x,y;
	        cin>>x>>y;
	        mp[x] += y;
	    }
	    
	    vector<long long> sum;
	    for(auto &p : mp){
	            sum.push_back(p.second);
	    }
	    
	    sort(sum.rbegin(), sum.rend());
	    
	    long long ans = 0;
	    for(int i=0; i<min((int)sum.size(), n); i++){
	        ans += sum[i];
	    }
	    cout<<ans<<endl;
	   
	}

}
