#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> pref(n+1);
	
	pref[0] = 0;
	
	for(int i=1; i<=n; i++){
	    int x;
	    cin >>x;
	    pref[i] = pref[i-1] + x;
	}
	
    int	i = 10;
	int k = n/10;
	bool res = true;
	while(k--){
	    int sum = (i * (i+1))/2;
	    if(pref[i] != sum) res = false;
	    i+=10;
	}
	
	cout << ((res) ? "YES" : "NO") << "\n";
	
	return 0;

}
