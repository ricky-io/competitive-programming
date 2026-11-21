#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++) cin>>a[i];
	    
	    bool ans = false;
	    bool ans2 = false;
	    
	    int idx2 = -1;
	    
	    unordered_map<int, int> p1;
	    for(int i=0; i<n-2; i++){
	        p1[a[i]]++;
	        //if(p1[a[0]] >= p1[a[1]] && p1[a[0]] >= p1[a[2]]){
	        if(p1[1] >= p1[2] + p1[3]){
	            ans = true;
	            idx2 = i;
	            unordered_map<int, int> p2;
        	    for(int i = idx2+1; i<n-1; i++){
        	        p2[a[i]]++;
        	        //if(p2[1] >= p2[3] && p2[2] >= p2[3]){
        	        if(p2[1] + p2[2] >= p2[3]){
        	            ans2 = true;
        	            break;
        	        }
        	    }
	            
	        }
	    }
	    
	    
	   // unordered_map<int, int> p2;
	   // for(int i = idx2+1; i<n-1; i++){
	   //     p2[a[i]]++;
	   //     //if(p2[1] >= p2[3] && p2[2] >= p2[3]){
	   //     if(p2[1] + p2[2] >= p2[3]){
	   //         ans2 = true;
	   //         break;
	   //     }
	   // }
	    
	    if(ans && ans2) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
