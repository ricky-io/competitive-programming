#include <bits/stdc++.h>
using namespace std;

long long prefix(long long n, long long m){
    if(n < 0) return 0;
    
    long long full = (n+1)/m;
    long long rem = (n+1) % m;
    
    long long cyclesum = m * (m-1) / 2;
    long long partial = rem * (rem - 1) / 2;
    
    return full * cyclesum + partial;
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    long long a, b , m;
	    cin >> a >> b >> m;
	    
	    cout << prefix(b, m) - prefix(a, m) << endl;
	}

}
