#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--){
    	 int n;
    	 cin>>n;
    	 unordered_map<int, int> mp;
    	 
    	 for(int i=0; i<n; i++){
    	     int x;
    	     cin>>x;
    	     mp[x]++;
    	 }
    	 
    	 int ans = -1;
    	 
    	 for(auto x : mp){
    	     if(x.second >= 3){
    	         ans = x.first;
    	         break;
    	     }
    	 }
        cout<<ans<<endl;
    
	}
    return 0;
}
