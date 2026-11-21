#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n; int k;
	    cin >> n >> k;
	    
	    vector<int> mp(26, 0);
	    for(int i=0; i<n; i++){
	        char c;
	        cin >> c;
	        
	        int z = (int)c - 'a';
	        
	        mp[z]++;
	    }
	    
	    sort(mp.begin(), mp.end());
	    
	    int odd = 0;
	    for(int i=0; i<mp.size(); i++){
	        if(mp[i] % 2 != 0) odd++;
	    }
	    
	    if (odd <= k + 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
	    
	}

}
