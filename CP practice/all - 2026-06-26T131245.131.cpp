#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> cells(100);
	
	int sum = 4;
	cells[1] = 1;
	for(int i=2; i<102; i++){
	    cells[i] = cells[i-1] + sum;
	    sum+=4;
	}
	
	int n;
	cin>>n;
	cout<<cells[n]<<endl;

}
