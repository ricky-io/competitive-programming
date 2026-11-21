#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<long long> coins(n);
	
	for(int i=0; i<n; i++) cin >> coins[i];
	
	sort(coins.begin(), coins.end());
	
	long long total = std::accumulate(coins.begin(), coins.end(), 0LL);
	
	vector<long long> sums(total+1LL, false);
	
	for(int i=0; i<n; i++){
	    long long sum = 0;
	    for(int j=i; j<n; j++){
	        sum += coins[j];
	        sums[sum] = true;
	    }
	}
	
	for(int i=1; i<=total; i++){
	    if(!sums[i]){
	        cout << i << endl;
	        break;
	    }
	}
	
	return 0;
}
