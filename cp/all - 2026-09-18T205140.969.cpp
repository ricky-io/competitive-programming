#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main() {
	long long n;
	cin >> n;
	
	int ans = 0;
	while(n >= 5){
	    int a = n / 5;
	    ans += a;
	    n /= 5;
	}
	
	cout << ans << endl;

}
