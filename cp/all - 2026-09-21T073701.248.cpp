#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	
	for(int i=0; i<n; i++) cin >> a[i];
	
	long long best = a[0];
	long long curr = a[0];
	
	for(int i=1; i<n; i++){
	    if(a[i] > curr + a[i]) curr = a[i];
	    
	    else curr += a[i];
	    
	    
	    best = max(curr, best);
	}
	
	cout << best << endl;

}
