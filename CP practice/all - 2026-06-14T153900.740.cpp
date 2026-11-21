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
	    int mn = *min_element(arr.begin(), arr.end());
	    int mx = *max_element(arr.begin(), arr.end());
	    int ops = (mn + mx)/2;
	    cout<<max(abs(ops - mn) , abs(ops - mx))<<endl;
	}

}
