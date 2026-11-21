#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    int ops = 0; int sum = 0;
	    for(int i=0; i<n; i++){
	        if(v[i] == 0){
	            ops++; continue;
	        }
	        sum+=v[i];
	        if(sum%3 == 0 && sum != 0) {
	            ops++; sum = 0;
	        }
	    }
	    cout<<ops<<endl;
	}

}
