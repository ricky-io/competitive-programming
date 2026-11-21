#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a, b;
	cin >> a >> b;
	
	vector<int> v(n);
	
	for(int i=0; i<n; i++) cin >> v[i];
	
	int curr = v[0];
	int best = v[0];
	
	int i=0; int j=0;
	
	while(i < n){
	    if(v[i] > curr) curr = v[i];
	    
	    else curr += v[i];
	    
	    best = max(curr, best);
	    
	    i++;
	}
	
	cout << best << endl;
	
	return 0;

}
