#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++) cin>>a[i];
	    
        vector<long long> pref1(n+1, 0);
        vector<long long> pref2(n+1, 0);
        
        for (int i = 0; i < n; i++) {

        // pref1
        if (a[i] == 1)
            pref1[i + 1] = pref1[i] + 1;
        else
            pref1[i + 1] = pref1[i] - 1;
    
        // pref2
        if (a[i] == 3)
            pref2[i + 1] = pref2[i] - 1;
        else
            pref2[i + 1] = pref2[i] + 1;
    }
            
    long long mn = INT_MAX;
    bool ok = false;
    
    // leftEnd = last index of the left segment
    for (int leftEnd = 0; leftEnd <= n - 3; leftEnd++) {
    
        // Left segment [0..leftEnd]
        if (pref1[leftEnd + 1] >= 0)
            mn = min(mn, pref2[leftEnd + 1]);
    
        // Middle must have at least one element.
        // So its end is at least leftEnd + 1.
        if (pref2[leftEnd + 2] >= mn) {
            ok = true;
            break;
        }
    }
	  
	    if(ok) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
