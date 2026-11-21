#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int N;
	long long int D;
	cin>>N>>D;
	vector<vector<long long int>> nursery(N, vector<long long int> (2));
	for(int i=0; i<N; i++){
	    for(int j=0; j<2; j++){
	        cin>>nursery[i][j];
	    }
	}
	long long int sum = 0;
	for(int i=0; i<N; i++){
	    //for(int j=0; j<2; j++){
	        sum+= nursery[i][0] + nursery[i][1]*D;
	    
	}
	cout<<sum;

}
