#include <bits/stdc++.h>
using namespace std;

int f(string &s, int i, int d){
    if(i == 0) return 0;
    
    int ans = INT_MAX;
    
    for(int j=i-1; j >= i - d; j--){
        if(j >= 0 && s[j] == '1'){
            ans = min(ans, f(s, j, d));
        }
    }
    
    return ans == INT_MAX ? -1 : 1 + ans;
}

int main() {
	int n; int d;
	cin>>n>>d;
	string s;
	cin>>s;
	
	int res = f(s, n-1, d);
	cout<<res<<endl;
	return 0;
}
