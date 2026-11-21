#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
	    int n;
	    cin >> n;

	    int mn = INT_MAX;
	    pair<int, int> least;

	    for(int i=1; i <= n/2; i+=2){
	        int ans = lcm(i, n-i);
	        if(mn > ans){
	            mn = ans;
	            least.first = i;
	            least.second = n-i;
	        }
	    }

	    cout << least.first << " " << least.second << endl;
	}

}
