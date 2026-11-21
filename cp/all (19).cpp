#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, a;
	    cin>>n>>a;
	    
	    int l = 0;
	    int r = 0;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        if (x < a) l++;
            else if (x > a) r++;
	    }
	    
	    if (l > r)
            cout << a - 1 << endl;
        else
            cout << a + 1 << endl;
	    
	}
	return 0;
 
}