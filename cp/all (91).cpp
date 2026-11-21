#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n+1, 0);
	for(int i=1; i<=n; i++){
	    int x;
	    cin >> x;
	    a[x]++;
	}
	
	sort(a.begin(), a.end());
	
	int sum = std::accumulate(a.begin(), a.end(), 0) - a[n];
	cout << sum << endl;

}
