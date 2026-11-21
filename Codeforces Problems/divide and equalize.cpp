#include <bits/stdc++.h>
using namespace std;

void add_div(int x, unordered_map<int, int> &mp){
    int i=2;
    while(i*i <= x){
        while(x % i == 0) {
            mp[i]++;
            x /= i;
        }
        i++;
    }
    if(x > 1) mp[x]++;
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    
	    unordered_map<int, int> mp;
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        add_div(a[i], mp);
	    }
	    
	    bool ans  = true;
	    
	    for(auto e : mp){
	        if(e.second % n != 0) ans = false;
	    }
	    
	    if(ans) cout << "YES" << endl;
	    else cout << "NO" << endl;
	    
	}
	
	return 0;

}
