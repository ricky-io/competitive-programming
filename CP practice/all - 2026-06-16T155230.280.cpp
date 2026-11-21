#include <bits/stdc++.h>
using namespace std;

// CSES : Ferris Wheel

int main() {
	int n, x;
	cin>>n>>x;
	vector<int> w(n);
	for(int i=0; i<n; i++){
	    cin>>w[i];
	}
	// sort the array
	sort(w.begin(), w.end());
	
	int gondolas = 0;
	int i=0; int j = n-1;
	while(i<=j){
	    if(w[i] + w[j] <= x){
	        gondolas++;
	        i++;
	        j--;
	    } else {
	        gondolas++;
	        j--;
	    }
	}
	cout<<gondolas<<endl;

}
