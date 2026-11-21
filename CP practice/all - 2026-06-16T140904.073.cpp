#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n , k;
	    cin>>n>>k;
	    vector<int> brand(k);
	    vector<int> cost(k);
	    int sum = 0;
	    for(int i=0; i<k; i++){
	        cin>>brand[i]>>cost[i];
	        sum+=cost[i];
	    }
	    
	    if(n >= k ){
	        cout<<sum<<endl;
	        //return;
	    } else {
	        sort(cost.begin(), cost.end());
	        for(int i=0; i<(k-n); i++){
	            sum-= cost[i];
	        }
	        cout<<sum<<endl;
	        //return;
	    }
	    
	}
return 0;
}
