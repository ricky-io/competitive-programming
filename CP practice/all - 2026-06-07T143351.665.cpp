#include <bits/stdc++.h>
using namespace std;


using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	string s;
	cin>>s;
	ll n = s.length();
	ll maxSum = 0;
	ll i=0; ll j=i+1;
	ll sum = 0;
	while(j<n){
	    
	    if(s[i] == s[j]){
	        sum = j-i;
	        if(maxsum < sum) maxSum = sum;
	        j++;
	    }
	    
	    else {
	        sum = 0;
	        i = j;
	        j = i+1;
	    }
	}
	cout<<maxSum<<endl;

	return 0;
}
