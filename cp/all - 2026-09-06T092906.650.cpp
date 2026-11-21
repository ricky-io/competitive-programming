#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if(n < 4){
	    cout << "NO SOLUTION" << "\n";
	    return 0;
	}
	
	vector<int> nums(n);
	for(int i=0; i<n/2; i++){
	    nums[i] = (i+1)*2;
	}
	
	int k = 1;
	
	for(int i=n/2; i<n; i++){
	    nums[i] = k;
	    k+=2;
	}
	
	
	for(int i=0; i<n; i++) cout << nums[i] <<" ";
	
	return 0;

}
