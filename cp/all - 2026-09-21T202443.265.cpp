#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    
	    long long a, b, c;
	    cin >> a >> b >> c;
	    
	    long long ans1 = abs(a-b);
	    long long ans2 = abs(a+c - b);
	    
	    long long ans = max(ans1, ans2);
	    
	    cout << ans << endl;
	}

}
