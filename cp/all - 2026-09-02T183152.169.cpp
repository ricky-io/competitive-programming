#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    string s;
	    cin >> s;
	    
	    int left[26] = {0};
	    int right[26] = {0};
	    
	    // initially all elements in right side
	    
	    for(int i=0; i<n; i++){
	        int x = s[i] - 'a';
	        right[x]++;
	    }
	    
	    // count number of distinct charecters
	    
	    int leftdistinct = 0;
	    int rightdistinct = 0;
	    
	    for(int i=0; i<26; i++){
	        if(right[i] > 0) rightdistinct++;
	    }
	    
	    // split fromleft to right;
	    
	    int ans = 0;
	    for(int i=0; i<n-1; i++){
	        int x = s[i] - 'a';
	        if(left[x] == 0) leftdistinct++;
	        
	        left[x]++;
	        
	        right[x]--;
	        if(right[x] == 0) rightdistinct--;
	        
	        ans = max(ans, leftdistinct + rightdistinct);
	    }
	    
	    cout << ans << endl;
	}

}
