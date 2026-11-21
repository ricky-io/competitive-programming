#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int n, d;
	cin >> n >> d;
	
	vector<int> p(n);
	for(int i=0; i<n; i++) cin >> p[i];
	
	sort(p.rbegin(), p.rend());
	
	int i=0; int j=n-1;
	
	int wins = 0;
	
	while(i <= j){
	    int power = p[i];
	    while(j>i && power <= d){
	        power += p[i];
	        j--;
	    }
	    
	    if(power > d) wins++;
	    
	    i++;
	}
	
	cout << wins << '\n';

}
