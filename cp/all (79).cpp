#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        vector<int> a(3);
    	for(int i=0; i<3; i++) cin >> a[i];
    	
    	sort(a.begin(), a.end());
    	int ans = 0;
    	if(a[0] == a[1] || a[1] == a[2] || a[2] == a[0]){
    	    cout<<ans<<endl;
    	    continue;
    	}
    	
    	int d1 = a[2] - a[0];
    	int d2 = a[1] - a[0];
    	ans = d1 - d2;
    	
    	cout << ans << endl;  
    }
	
	
	return 0;

}
