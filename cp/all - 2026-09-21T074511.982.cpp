#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int n;
	cin >> n;
	
	vector<long long> a(n);
	
	long long mn = 0;
	
	for(int i=0; i<n; i++){
	    cin >> a[i];
	    mn += a[i];
	} 
	
	long long mn1 = mn / n;
	long long mn2 = (mn + n - 1) / n;
	
	long long cost1 = 0;
	long long cost2 = 0;
	
	for(int i=0; i<n; i++){
	    cost1 += abs(mn1 - a[i]);
	    cost2 += abs(mn2 - a[i]);
	}
	
	cout << min(cost1, cost2) << endl;
	
	

}
