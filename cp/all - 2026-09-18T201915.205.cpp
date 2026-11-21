#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long power(long long n){
    
    long long a = 2LL;
    
    long long ans = 1;
    
    while(n > 0){
        if(n & 1){
            ans = (ans * a) % MOD;
        }
        a = (a*a) % MOD;
        
        n >>= 1;
    }
    
    return ans;
    
}


int main() {
	long long n;
	cin >> n;
	
	
	cout << power(n) << endl;

}
