#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	int n;
	cin >> n;
	
	int a, b;
	cin >> a >> b;
	
	vector<ll> p(n+1, 0);
	
	for(int i=1; i<=n; i++) {
	    int x;
	    cin >> x;
	    
	    p[i] = p[i-1] + x;
	}
	
	multiset<ll> st;
	
	ll ans = LLONG_MIN;
	
	for(int i=a; i<=n; i++){
	    
	    st.insert(p[i-a]); // adding the element to the multiset
	    
	    if(i-b-1 >= 0) st.erase(st.find(p[i-b-1])); // removing element
	    
	    ans = max(ans, p[i] - *st.begin());
	}
	
	cout << ans << endl;
	
	return 0;

}
