#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    //int count = 0;
	    int sum = 0;
	    while(x>0){
	        sum = sum + x%10;
	        x = x/10;
	    }
	    if(sum % 9 == 0) cout<<10<<endl;
	    else cout<<0<<endl;
	}

}
