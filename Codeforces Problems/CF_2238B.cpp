#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    long long ans = 0;
	    
	    for(int b = 1; b<=n; b++){
	        int cnt = 0;
	        for(int x = b; x<=n; x+=b)
	            cnt++;
	        ans += 1LL * cnt * cnt;
	    }
	    cout<<ans<<endl;
	}
	return 0;
    
}
