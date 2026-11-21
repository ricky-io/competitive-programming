#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int, int>> cells(100);
	cells[0].first = 0;
	cells[0].second = 0;
	cells[1].first = 4;
	cells[1].second = 1;
	cells[2].first = 12;
	cells[2].second = 5;
	
	for(int i=3; i<101; i++){
	    cells[i].first = cells[i-1].first + 8;
	    cells[i].second = cells[i-1].second + (cells[i-1].first - cells[1].first);
	}
	
	int n;
	cin>>n;
//	cout<<cells[n].first<<endl;
	cout<<cells[n].second<<endl;

}
