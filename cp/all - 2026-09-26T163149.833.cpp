#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<long long> coins(n);
	
	for(int i=0; i<n; i++) cin >> coins[i];
	
	sort(coins.begin(), coins.end());
	
	long long reachable = 0;
	
	for(int coin : coins){
	    if(coin > reachable + 1){
	        break;
	    }
	    reachable += coin;
	}
	
	cout << reachable + 1 << endl;
	
	return 0;
}
