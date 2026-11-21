#include <bits/stdc++.h>
using namespace std;

// Aliquot Sum :

static const int MAXN = 1000000;

int main() {
	// your code goes here
	vector<int> s(MAXN + 1, 0);
	
	// Build aliquot sum using harmonic divisor contribution
	for(int d =1; d<=MAXN/2; d++){
	    for(int m = 2*d; m<=MAXN; m+=d){
	        s[m] += d;
	    }
	}
	
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    
	    if(s[n] == n) cout<<"Perfect\n";
	    else if (s[n] > n) cout<<"Abundant\n";
	    else cout<<"deficient\n";
	}
	return 0;

}
