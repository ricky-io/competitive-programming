#include <bits/stdc++.h>
using namespace std;

// Codeforces : 467B Fedor and New Game
// Bit Manipulation

int diff_bits(int m, int i){
    long long xorr = m ^ i;
    int cnt = 0;
    while(xorr){
        xorr = xorr & (xorr - 1);
        cnt++;
    }
    return cnt;
}

int main() {
	int n; int m; int k;
	cin>>n>>m>>k;
	vector<int> players(m+1);
	for(int i=0; i<=m; i++){
	    cin>>players[i];
	}
	// check for potential friends;
	int friends = 0;
	for(int i=m-1; i>=0; i--){
	    if(diff_bits(players[m], players[i]) <= k) friends++;
	}
	cout<<friends<<endl;
}
