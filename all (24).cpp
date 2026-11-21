#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin >> n;
	
	int power = 1;
	
	for(int i=0; i<n-2; i++){
	    power *= 3;
	}
	
	cout << 4 * (n-1) * power << endl;
	
	return 0;

}
