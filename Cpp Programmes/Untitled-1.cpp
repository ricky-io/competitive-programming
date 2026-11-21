#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> factorial(int n){
    vector<int> fact(n+1, 1);
    int MOD = 100000000 + 7;
    for(int i=2; i<=n; i++){
        fact[i] = ((i%MOD) * (fact[i-1] % MOD) ) % MOD;
    }
    return fact;
}
int main(){

}