#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int c;
	    cin>>n>>c;
	    vector<int> a(n);
	    for(int i=0; i<n; i++) cin>>a[i];
	    vector<int> b(n);
	    for(int i=0; i<n; i++) cin>>b[i];
	    
	    int sum = 0;
	    int sum2 = c;
	    
	    for(int i=0; i<n; i++){
	        int res = a[i] - b[i];
	        if(res < 0){
	            sum = INT_MAX;
	            break;
	        }
	        else sum += res;
	    }
	    
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end());
	    
	    for(int i=0; i<n; i++){
	        int res = a[i] - b[i];
	        if(res < 0){
	            sum2 = INT_MAX;
	            break;
	        }
	        else sum2 += res;
	    }
	    
	    int result = min(sum, sum2);
	    
	    if(result == INT_MAX) cout<<-1<<endl;
	    else cout<<result<<endl;
	    
	}

}
