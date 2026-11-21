#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
	    int n;
	    cin >> n;

	    int x = 2;
	    
	    
	    while(x*x <= n && n % x != 0) x++;
	    
	    if(x*x > n) x = n;

	    cout << n/x << " " << n - n/x << endl;
	}

}
