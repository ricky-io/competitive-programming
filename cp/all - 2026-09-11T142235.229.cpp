#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	
	vector<long long> v(n);
	
	for(int i=0; i<n; i++) cin >> v[i];
	
	map<long long, int> mp; 
	
	// window first;
	
	for(int i=0; i<k; i++){
	    mp[v[i]]++;
	}
	
	cout << mp.size() <<" ";
	
	// complete sliding windows
	
	for(int i=0, j=k; j<n; i++, j++){
	    
	    mp[(v[i])]--;
	    if(mp[v[i]] == 0) mp.erase(v[i]);
	    
	    mp[v[j]]++;
	    
	    cout << mp.size() << " ";
	}
	
	cout << endl;
	
	return 0;

}
