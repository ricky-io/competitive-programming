#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	
	vector<int> a(n);
	
	long long mn = 0;
	
	for(int i=0; i<n; i++){
	    cin >> a[i];
	    mn += a[i];
	} 
	
	long long mn1 = mn / n;
	long long mn2 = (mn + n - 1) / n;
	long long md;
	if(n % 2){
	    int idx = (n+1)/2;
	    md = a[idx];
	}
	else {
	    int idx = ((n/2) + (n+1)/2)/2;
	    md = a[idx];
	}
	
	
	long long cost1 = 0;
	long long cost2 = 0;
	long long cost3 = 0;
	
	for(int i=0; i<n; i++){
	    cost1 += abs(mn1 - a[i]);
	    cost2 += abs(mn2 - a[i]);
	    cost3 += abs(md - a[i]);
	}
	
	cout << min({cost1, cost2, cost3}) << endl;
	
}
	
	
 
