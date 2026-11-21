#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
	    int n;
	    cin >> n;

	    int x = 2;
	    
	    while(n % x != 0) x++;

	    cout << n/x << " " << n - n/x << endl;
	}

}
