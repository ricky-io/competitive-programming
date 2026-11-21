#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> nums;
	    for(int i=10; i<=10000 && n>0; i*=10){
	        if(n == 10000){
	            nums.push_back(n);
	            break;
	        }
	        int r = n%i;
	        if(r==0) continue;
	        nums.push_back(r);
	        n -= r;
	    }
	    cout<<nums.size()<<endl;
	    for(auto x : nums) cout<<x<<" ";
	    cout<<endl;
	}

}
