#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> p(n+1);
	    for(int i=1; i<=n; i++) cin >> p[i];
	    int fp = 0;
	    for(int i=1; i<=n; i++) if(p[i] == i) fp++;
	    //int i=1;
	   // int curr = 0;
	    int best = 0;
	    
	   // while(i <= n){
	   //     if(p[i] == i) {
	   //         int left = i-1; int right = i+1;
	   //         while(left > 0 && right < n){
	   //             if(p[left] == left || p[right] == right){
	   //                 curr = 0;
	   //                 break;
	   //             }
	   //             if(p[left] == right || p[right] == left) curr++;
	   //             best = max(curr, best);
	   //             left--;
	   //             right++;
	   //         }
	   //     }
	   //     i++;
	   // }
	   
	   for(int i=1; i<=n; i++){
	       if(p[i]!=i && p[p[i]] == i) best = max(best, 2);
	   }
	   
	   if(best == 0 && fp < n) best = 1;
	   
	    cout << fp + best << endl;
	    
	    
	}

}
