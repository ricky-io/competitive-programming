#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll calc(int i, int x){
    if(dp[i][x] != -1) return dp[i][x];
    if(i == n) {
        return 0;
    }
    if(x==0){
        return dp[i][x] = calx(i+1, x+1) + as[i];
    } else if(x== n-i) {
        return dp[i][x] = calc(i+1, x-1) + cap[i];
    } else {
        return dp[i][x] = min(calc(i+1, x+1) + as[i], calc(i+1, x-1)+cap[i]);
    }
}

int main() {
	// your code goes here

}
