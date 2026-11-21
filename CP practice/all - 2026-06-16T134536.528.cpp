#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> p(n);
	    for(int i=0; i<n; i++){
	        cin>>p[i];
	    }
	    
	    int gold = 0;
	    int given_to = 0;
	    for(int i=0; i<n; i++){
	        if(p[i] > 0) gold+=p[i];
	        else if(gold > 0 && p[i] == 0){
	            given_to++;
	            gold--;
	        }
	    }
	    cout<<given_to<<endl;
	}

}
