#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    int ops = 0; int sum = 0;
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        sum+=x; if(x == 0) ops++;
	        v.push_back(x);
	    }
	    
	    ops += sum/3;
	    cout<<ops<<endl;
	}

}
