#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	long long a, b;
	cin >> a >> b;
	
	if(a > b || (a-b) % 2 != 0){
	    cout << -1 << endl;
	    return 0;
	}
	
	if(b == 0 || a == 0){
	    cout << 0 << endl;
	    return 0;
	}
	
	ll x = (b-a) / 2;
	
	if((a&x) == 0){
	    cout << 2 << endl;
	    cout << a+x <<" " <<x << endl;
	    return 0;
	}
	
	cout << 3 << endl;
	cout << a << " " << x << " " << x << endl; 

}
