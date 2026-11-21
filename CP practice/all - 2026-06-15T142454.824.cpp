#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int neg = 0;
	    vector<long long> v;
	    for(int i=0; i<n; i++){
	        long long x; cin>>x; if(x <= 0) neg++;
	        v.push_back(x);
	    }
	    for(int i=n-1; i>0; i--){
	        if(v[i]>0 && v[i] + v[i-1] > 0){
	            if(v[i-1] <= 0) neg--;
	            v[i-1] = v[i] + v[i-1];
	        }
	    }
	    int ans = n - neg;
	    cout<<ans<<endl;
	}
    return 0;
}
