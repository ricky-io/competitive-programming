#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> nums(n);
	long long int sum = 0;
	for(int i=0; i<n-1; i++){
	    int x;
	    cin>>x;
	    sum+=x;
	    nums.push_back(x);
	}
    long long int ans = n * (n+1);
	ans = ans/2;
	ans = ans - sum;
	cout<<ans<<endl;
	
}
