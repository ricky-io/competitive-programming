#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isPalindrome(vector<int> &a){
    int n = a.size();
    
    int i=0; int j=n-1;
    
    while(i < j){
        if(a[i++] != a[j--]) return false;
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    for(int i=0; i<n; i++) cin >> a[i];
	    
	    bool ans = false;
	    
	    bool check = isPalindrome(a);
	    
	    if(n < 3){
	        cout << "YES" << '\n';
	        continue;
	    }
	        if(n % 2 == 0 && check){
	            ans = true;
	        }
	        else if(a[n/2] == a[n/2+1] || a[n/2] == a[n/2-1]){
	            ans = true;
	        }
	    
	    if(ans == true) cout << "YES" << '\n';
	    else cout << "NO" << '\n';
	}

}
