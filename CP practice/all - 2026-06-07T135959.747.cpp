#include <bits/stdc++.h>
using namespace std;

using const MOD 10000000007 // modulo for 10^10

int main() {
	long long int n;
	vector<long long int> arr(n);
	long long int sum = 0;
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	    sum = (sum + arr[i]) % MOD;
	}
	
	long long int ans = (n * (n+1)) % MOD;
	ans = ans / 2;
	return (ans - sum) % MOD;

}
