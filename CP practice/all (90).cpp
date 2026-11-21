#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // vector<int>;
    	vector<int> freq(100, -1);
    	int y = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
            y++;
        }
        int m = freq.size();
       
        int max = 0;
        for(int i=0; i<m; i++){
            if(freq[i] == -1) continue;
            if(freq[i] >= max) max = freq[i];
        }
        if(n == y) cout<<n/2<<endl;
        else cout<<(n- max + 1)/2<<endl;
	}


}
