#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool type(ll x, ll d){
    if(x==0){
        return d!=0;
    }
    
    while(x>0){
        int digit = x%10;
        
        if(digit == d){
            return false;
        }
        
        x/=10;
        
    }
    
    return true;
    
}



int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    ll n;
	    int d;
	    
	    cin >> n >> d;
	    
	    while(!type(n, d)){
	        n++;
	    }
	    
	    cout << n << endl;
	}
	

}
