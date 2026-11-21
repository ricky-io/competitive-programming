#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
	    if(i % 3 == 0) cout << "Fizz" <<endl;
	    else cout << i << endl;
	}

}
