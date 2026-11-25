#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
        cin >> n >> m;

        vector<vector<int>> deck(m, vector<int> (n));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cin >> deck[j][i];
        }

        for(int i=0; i<m; i++){
            sort(deck[i].begin(), deck[i].end());
        }

        int sum = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                sum -= (deck[i][j] * (n-j-1));
                sum += (deck[i][j] * j);
            }
        }

        cout << sum << '\n';

	}

    return 0;

}
