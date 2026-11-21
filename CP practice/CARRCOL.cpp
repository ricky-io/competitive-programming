#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, l, r;
	    cin>>n>>l>>r;
	    vector<int> carrot(n);
	    for(int i=0; i<n; i++) cin>>carrot[i];
	    
	    int lans = 0; 
	    int rans = 0;
	    lans = accumulate(carrot.begin(), carrot.begin()+l-1, 0);
	    rans = accumulate(carrot.begin()+r, carrot.end(), 0);
	    
	    int ans = max(rans, lans);
	    
	    cout<<ans<<endl;
	}

}
