#include <bits/stdc++.h>
using namespace std;
#define int long long


bool check(vector<vector<int>> &pos, int n, int mid, int k){
    //int n = a.size();

    for(int color = 1; color<=k; color++){
        int largest = 0;
        int sec_largest = 0;
        int last = -1;

        for(int p : pos[color]){
                int gap = p-last-1;

                if(gap > largest){
                    sec_largest = largest;
                    largest = gap;
                }
                else if(gap > sec_largest){
                    sec_largest = gap;
                }

                last = p;
           
        }

        int gap = n-last-1;

        if(gap > largest){
            sec_largest = largest;
            largest = gap;
        }
        else if(gap > sec_largest){
            sec_largest = gap;
        }

        int maximumgapafterrepaint = max(sec_largest, largest/2);
        if(maximumgapafterrepaint <= mid) return true;
    }

    return false;
}

signed main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
        //vector<int> a(n);
        vector<vector<int>> pos(k+1);


	    for(int i=0; i<n; i++){
            int x;
            cin >> x;
            pos[x].push_back(i);
        }

        int lo = 0;
        int hi = n;

        while(lo < hi){
            int mid = lo + (hi - lo)/2;

            if(check(pos, n, mid, k)){
                hi = mid;
            }
            else lo = mid+1;
        }

        cout << lo << '\n';
	}

    return 0;

}
