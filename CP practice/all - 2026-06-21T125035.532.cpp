#include <bits/stdc++.h>
using namespace std;

// Nice 

long long f(const vector<vector<long long>>& table, long long x){
    auto it = upper_bound(
        table.begin(), table.end(), x,
        [](long long x, const auto& row){
            return x < row[1];
        }
    );

    return (it == table.end() ? -1 : (*it)[2]);
}

int main() {
	long long n;
	cin>>n;
	vector<vector<long long>> table(n, vector<long long>(3));
	// Input the takahashis and thier leaving time
	for(long long i=0; i<n; i++){
	    cin>>table[i][0]>>table[i][1];
	}
	
	// putting max value for according to thier leaving time
	table[n-1][2] = table[n-1][0];
	for(long long i = n-2; i>=0; i--){
	    table[i][2] = max(table[i][0], table[i+1][2]);
	}
	
	// just display for a while
	for(long long i = 0; i<n; i++){
	    cout<<table[i][0]<<" "<<table[i][1]<<" "<<table[i][2]<<endl;
	}
	
	long long q;
	cin>>q;
	while(q--){
	    long long q1;
	    cin>>q1;
	   cout<<f(table, q1)<<endl;
	}

}


// 329
// 329
// 329
// 755
// 755
// 755
// 755
// 329
// 755
// 329
// 329
// 329
// 755
// 772