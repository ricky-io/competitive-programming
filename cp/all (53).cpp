#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin>>k;
	
	vector<vector<int>> a(k+1);
	vector<long long> sum(k+1);
	
	for(int i=1; i<=k; i++){
	    int n;
	    cin>>n;
	    
	    a[i].resize(n+1);
	    for(int j=1; j<=n; j++){
	        cin>>a[i][j];
	        sum[i] += a[i][j];
	    }
	}
	
	
	unordered_map<long long, pair<int, int>> mp;
	
	for(int i=1; i<=k; i++){
	    int n = a[i].size() - 1;
	    for(int j=1; j<=n; j++){
	        long long remaining  = sum[i] - a[i][j];
	        if(mp.count(remaining)){
	            auto [arr, idx] = mp[remaining];
	            
	            if(arr != i){
	                cout<<"YES"<<endl;
	                cout<<arr<<" "<<idx<<endl;
	                cout<<i<<" "<<j<<endl;
	                return 0;
	            }
	        } else {
	            mp[remaining] = {i, j};
	        }
	    }
	}
	cout<<"NO"<<endl;
	return 0;

}
