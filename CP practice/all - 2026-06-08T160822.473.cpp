#include <bits/stdc++.h>
using namespace std;

// count distinct numbers in an given array:


using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	ll n;
	cin>>n;
	unordered_set<int> s;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();

	return 0;
}
