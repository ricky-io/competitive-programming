#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long>& mech, long long mid, long long t){
    int n = mech.size();
    long long cnt = 0;
    
    for(int i=0; i<n; i++){
        cnt += mid / mech[i];
        if(cnt >= t) return true;
    }
    
    return false;
    
}

int main() {
	long long n, t;
	cin>>n>>t;
	
	vector<long long> mech(n);
	for(int i=0; i<n; i++) cin>>mech[i];
	
	sort(mech.begin(), mech.end());
	
	
	long long lo = 1;
	long long hi = mech[0] * t;
	long long ans = hi;
	
	while(lo <= hi){
	    long long mid = lo + (hi - lo)/2;
	    
	    if(check(mech, mid, t)){
	        ans = mid;
	        hi = mid - 1;
	    } 
	    else lo = mid + 1;
	}
	cout<<ans<<endl;
	return 0;

}
