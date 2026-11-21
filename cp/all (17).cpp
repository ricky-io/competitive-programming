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
	    int freq = 0;
	    set<int> s;
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        if(x == k) fk++;
	        if(x >= 0 && x<= k) {
	            s.insert(x);
	            freq++;
	        }
	    }
	    int ans = 0;
	    if(k == 0 && fk != 0) ans = 1; 
	    else if(s.size() == freq) ans = 0;
	    else ans = fk + (freq - s.size()) - 1;
	    
	    cout<<ans<<endl;
	}

}
