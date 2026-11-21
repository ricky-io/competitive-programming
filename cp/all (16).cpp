#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n, x, y;
	    cin>>n>>x>>y;
	    
	    x = abs(x); y = abs(y);
	    
	    string s;
	    cin>>s;
	    
	    int fours = 0;
	    int eights = 0;
	    
	    for(int i=0; i<n; i++){
	        if(s[i] == '4') fours++;
	        else eights++;
	    }
	    bool ans = true;
	    
	    if(fours + 2*eights < x + y || fours + eights < max(x , y)) ans = false;
	    
	    if(ans) cout<<"yes"<<endl;
	    else  cout<<"No"<<endl;
	    
	}
    return 0;
}
