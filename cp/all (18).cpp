#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int fk = 0;
	    set<int> s;
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        if(x >= 0 && x< k) s.insert(x);
	        if(x == k) fk++;
	        
	    }
	    int z = k - s.size();
	    int c = fk;
	    
	    int ans = max(z, c);
	    
	    cout<<ans<<endl;
	}

}
