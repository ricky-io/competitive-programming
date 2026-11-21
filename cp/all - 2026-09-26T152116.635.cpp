#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

	int n, m;
	cin >> n >> m;
	
	vector<ll> tickets(n);
	vector<ll> customers(m);
	
	for(int i=0; i<n; i++) cin >> tickets[i];
	for(int j=0; j<m; j++) cin >> customers[j];
	
	int i=0; int j=0; int k=0;
	
	vector<ll> results(m, -1LL);
	
	while(i < n && j < m){
	    if(tickets[i] > customers[j]) i++; 
	    
	    while(i < n && tickets[i] < customers[j]) results[k] = max(tickets[i++], results[k]);
	    
	    k++;
	    j++;
	    
	}
	
	for(auto x : results) cout << x << endl;
	
	return 0;

}
