#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(), arr.end());
	    int mx = arr[n-1];
        int mn = arr[0];
        int ans = mx - mn + 1;
        cout<<ans<<endl;
	    
	}
    return 0;
}
