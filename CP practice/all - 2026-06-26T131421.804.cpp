#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	
	vector<int> cells(n+1);
	
	int sum = 4;
	cells[1] = 1;
	for(int i=2; i<n+1; i++){
	    cells[i] = cells[i-1] + sum;
	    sum+=4;
	}
	
	
	cout<<cells[n]<<endl;

}
